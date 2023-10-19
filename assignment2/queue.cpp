/**
   Project: Implementation of a Queue in C++.
   Programmer: Karim Naqvi
   Course: enel452
*/

/**
 * Project: ENSE 452 Assignment #2
 * Course: ENSE 452/ENEL 452 
 * Programmer: Alok Paranjape (modified from above)
 * Date: Oct 18th, 2023
 * Description: Adding a function to the implemented queue structure
 * that allows inserting elements at positions other than the tail
*/

#include "queue.h"
#include <iostream>
#include <cstdlib>              // for exit

using namespace std;

Queue::Queue()
{
    head = 0;
    tail = 0;
    nelements = 0;
    verbose = false;
}

Queue::~Queue()
{
    for (QElement* qe = head; qe != 0;)
    {
        QElement* temp = qe;
        qe = qe->next;
        delete(temp);
    }
}

void Queue::remove(Data* d)
{
    if (size() > 0)
    {
        QElement* qe = head;
        head = head->next;
        nelements--;
        *d = qe->data;
	delete qe;
    }
    else
    {
        cerr << "Error: Queue is empty.\n";
        exit(1);
    }
}

void Queue::insert(Data d)
{
    if (verbose) std::cout << "insert(d)\n";
    QElement* el = new QElement(d);
    if (size() > 0)
    {
        tail->next = el;
    }
    else
    {
        head = el;
    }
    tail = el;
    nelements++;
}

/**
 * Inserts a set of data at a given position in the queue
 * Rather than just at the end. Includes specific conditions for:
 *  - out of bounds positions 
 *  - inserting at the head
 *  - inserting at the tail (i,e just calling)
 *  - inserting at in front of the tail
*/

void Queue::insert(Data d, unsigned position)
{
    //before inserting, check if the position is in bounds
    if(position > size())
    {
        cerr << "insert: range error" << endl;
        return;
    }

    //if it's valid, then make a new element to add to the queue

    QElement* new_element = new QElement(d);

    //if the position is zero
    if(position == 0)
    {
        //make the new node point to the head
        new_element->next = head;
        //then replace it as the head
        head = new_element;
        //update the number of nodes, then exit
        nelements++;
        return;
    }

    //if the position is the size, it's adding to the tail like a regular queue
    if(position == size())
    {
        //so call the regular insert function for it,
        insert(d);
        return;
    }

    //if it's one less than the size
    if(position == size() - 1)
    {
        //point at the head and iterate to before 
        //where the new node is supposed to go
        QElement* temp_element = head;
        for(unsigned i = 0; i < size() - 2; i++)
        {
            temp_element = temp_element->next;
        }
        //set the temporary pointer at the new node
        temp_element->next = new_element;
        //then point the new node at the tail so it doesn't break the queue
        new_element->next = tail;
        nelements++;
        return;
    }

    //if it isn't any of those positions
    //make a pointer to the head
    QElement* prev_pointer = head;

    //and iterate it to right before where the new node is supposed to go
    for(unsigned i = 0; i < (position-1); i++)
    {
        prev_pointer = prev_pointer->next;
    }
    //point the new node at where the temporary pointer was
    new_element->next = prev_pointer->next;
    //then point the previous node at the new one to complete the insertion 
    prev_pointer->next = new_element;
    nelements++;
    return;

}

bool Queue::search(Data otherData) const
{
    QElement* insideEl = head;
    for (int i = 0; i < nelements; i++)
    {
        if (insideEl->data.equals(otherData))
            return true;
        insideEl = insideEl->next;
    }
    return false;
}

void Queue::print() const
{
    QElement* qe = head;
    if (size() > 0)
    {
        for (unsigned i = 0; i < size(); i++)
        {
            cout << i << ":(" << qe->data.x << "," << qe->data.y << ") ";
            qe = qe->next;
        }
    }
    cout << "\n";
}

unsigned Queue::size() const
{
    return nelements;
}
