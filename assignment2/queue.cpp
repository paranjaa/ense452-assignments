/**
   Project: Implementation of a Queue in C++.
   Programmer: Karim Naqvi
   Course: enel452
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

void Queue::insert(Data d, unsigned position)
{
    // cout << "Hello World, inserting an element at a position" << endl;
    QElement* new_element = new QElement(d);

    //if the given position is after the tail's next space, then end it there
    // if(position > (size() + 1))
    // {
    //     cout << "Error" << endl;
    //     return;
    // }

    if(position == 1)
    {
        cout << "adding a new element at the head position" << endl;
        new_element->next = head;
        head = new_element;
        nelements++;
        return;
    }

    QElement* prev_element = head;
    unsigned position_copy = position;
    while(--position_copy > 1)
    {
        prev_element = prev_element ->next;
    }
    cout << "the position minus 1th element is" << endl;
    cout << "(" << prev_element->data.x << "," << prev_element->data.y << ") " << endl;
    new_element->next = prev_element->next;
    prev_element->next = new_element;
    nelements++;




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
