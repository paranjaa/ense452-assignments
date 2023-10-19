/**
   Project: Implementation of a Queue in C++.
   Programmer: Karim Naqvi
   Course: enel452
   Description: test code
*/

/**
 * Project: ENSE 452 Assignment #2
 * Course: ENSE 452/ENEL 452 
 * Programmer: Alok Paranjape (modified from above)
 * Date: Oct 18th, 2023
 * Description: Testing the new insert function, if it handles each condition
 * Wasn't able to reliably remember assert statements from 375,
 * Did the tests with printing instead 
*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <vector>

#include "queue.h"

/**
   Compare the given queue to the given array of data elements.  Return
   true if they are all equal.
 */
bool testQueueEquality( Queue & q, std::vector<Data> const & array)
{
    if (q.size() != array.size())
	return false;

    for (unsigned i = 0; i < q.size(); ++i)
    {
        Data d(0,0);
	q.remove(&d);
	if ( !d.equals(array[i]) )
	    return false;
	q.insert(d);
    }
    return true;
}


int main()
{
    using namespace std;

    cout << "Testing queue.\n";
    Queue q1;

    q1.insert(Data(1,1));
    q1.insert(Data(3,3));
    q1.insert(Data(5,5));

    q1.print();

    vector<Data> dataVec;
    dataVec.push_back(Data(1,1));
    dataVec.push_back(Data(3,3));
    dataVec.push_back(Data(5,5));

    assert(testQueueEquality(q1, dataVec));

    Data d44(4, 4);
    bool found = q1.search(d44);
    assert(found == false);


    q1.insert(d44);  // now is (1,1),(3,3),(5,5),(4,4)
    found = q1.search(d44);
    assert(found == true);

    // now queue is(1,1),(3,3),(5,5),(4,4) and 
    // dataVec has (1,1),(3,3),(5,5).  Not equal
    assert(testQueueEquality(q1, dataVec) == false);

    Data temp;
    q1.remove(&temp);  // now q1 is (3,3),(5,5),(4,4)

    Data temp2(1,1);
    assert(temp.equals(temp2));  // (1,1) == (1,1)

    Data temp3(6,6);
    found = q1.search(temp3);
    assert(found == false);

    cout << endl << "Testing: inserting to out of bounds positions" << endl;
    cout << "Should print an error, and also not change" << endl;

    Queue q_error;

    q_error.insert(Data(15,15));
    q_error.insert(Data(16,16));
    q_error.insert(Data(17,17));
    q_error.print();
    q_error.insert(Data(4,4),4);
    cout << endl;
    q_error.print();


    cout << endl << "Testing: the insert position function" << endl;
    Queue q_insert_position;
    q_insert_position.insert(Data(1,1));
    q_insert_position.insert(Data(3,3));
    q_insert_position.insert(Data(5,5));
    q_insert_position.insert(Data(6,6));

    q_insert_position.print();

    cout << endl << "Adding a node after the head, in position 1" << endl;
    q_insert_position.insert(Data(2,2), 1);
    
    q_insert_position.print();
    
    cout << endl << "Adding a node after that node, should be in order now" << endl;
    q_insert_position.insert(Data(4,4), 3);
    
    q_insert_position.print();

    cout << endl << "Testing: adding a node to the head " << endl ;
    Queue q_head;

    q_head.insert(Data(11,11));
    q_head.insert(Data(12,12));
    q_head.insert(Data(13,13));
    q_head.print();
    q_head.insert(Data(10,10),0);
    cout << endl;
    q_head.print();

    
    cout << endl << "Testing: replacing the tail (inserting at (size)" << endl;

    Queue q_tail;

    q_tail.insert(Data(7,7));
    q_tail.insert(Data(8,8));
    q_tail.insert(Data(9,9));
    q_tail.print();
    q_tail.insert(Data(10,10),3);
    cout << endl;
    q_tail.print();


    cout << endl << "Testing: adding a value in front of the tail" << endl;

    Queue q_tail_before;

    q_tail_before.insert(Data(18,18));
    q_tail_before.insert(Data(19,19));
    q_tail_before.insert(Data(21,21));
    q_tail_before.print();
    q_tail_before.insert(Data(20,20),2);
    cout << endl;
    q_tail_before.print();



   

}
