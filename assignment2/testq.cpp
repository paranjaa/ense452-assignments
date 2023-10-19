/**
   Project: Implementation of a Queue in C++.
   Programmer: Karim Naqvi
   Course: enel452
   Description: test code
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


    cout << "Testing the insert position function" << endl;
    Queue q_insert_position;
    q_insert_position.insert(Data(1,1));
    q_insert_position.insert(Data(3,3));
    q_insert_position.insert(Data(5,5));
    q_insert_position.insert(Data(6,6));

    cout << "Intitial queue" << endl;
    q_insert_position.print();

    cout << "Adding a node after the head, in position 1" << endl;
    q_insert_position.insert(Data(2,2), 1);
    
    q_insert_position.print();
    
    cout << "Adding a node after that node, should be in order now" << endl;
    q_insert_position.insert(Data(4,4), 3);
    
    q_insert_position.print();

    cout << "Testing adding a node to the head " << endl;
    Queue q_head;

    q_head.insert(Data(11,11));
    q_head.insert(Data(12,12));
    q_head.insert(Data(13,13));
    cout << "Initial queue:" << endl;
    q_head.print();
    q_head.insert(Data(10,10),0);
    cout << "Should put a new value at the head" << endl;
    q_head.print();

    
    cout << "Testing adding a node to the head " << endl;




    // Queue q;
    // q.insert(Data(1,2));
    // q.insert(Data(3,4));
    // q.insert(Data(5,6));
    // q.insert(Data(-2,-3), 1);
    // // q.insert(Data(-4,-5), 3);
    // q.print();
    // should produce 0:(1,2) 1:(-2,-3) 2:(3,4) 3:(-4,-5) 4:(5,6)

}
