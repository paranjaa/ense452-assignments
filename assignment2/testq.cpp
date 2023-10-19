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
    Queue q3;

    q3.insert(Data(1,1));
    q3.insert(Data(3,3));
    q3.insert(Data(5,5));

    //testing adding to the head
    q3.print();

    cout << "Inserting a node in the 0 position" << endl;
    q3.insert(Data(0,0), 0);

    //should put the (0,0) node where 1,1 used to be
    q3.print();

    cout << "Inserting a node after the tail" << endl;
    q3.insert(Data(7,7),3);
    q3.print();
    

    cout << "Replacing the tail" << endl;
    q3.insert(Data(9,9),4);
    q3.print();

    // q1.insert(Data(2,2), 1);

    // q1.print();

    // q1.insert(Data(3,3), 2);

    // q1.print();

    // vector<Data> dataVec;
    // dataVec.push_back(Data(1,1));
    // dataVec.push_back(Data(3,3));
    // dataVec.push_back(Data(5,5));

    // assert(testQueueEquality(q1, dataVec));

    // Data d44(4, 4);
    // bool found = q1.search(d44);
    // assert(found == false);


    // q1.insert(d44);  // now is (1,1),(3,3),(5,5),(4,4)
    // found = q1.search(d44);
    // assert(found == true);

    // // now queue is(1,1),(3,3),(5,5),(4,4) and 
    // // dataVec has (1,1),(3,3),(5,5).  Not equal
    // assert(testQueueEquality(q1, dataVec) == false);

    // Data temp;
    // q1.remove(&temp);  // now q1 is (3,3),(5,5),(4,4)

    // Data temp2(1,1);
    // assert(temp.equals(temp2));  // (1,1) == (1,1)

    // Data temp3(6,6);
    // found = q1.search(temp3);
    // assert(found == false);
}
