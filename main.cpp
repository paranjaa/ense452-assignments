/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
*/

#include <iostream>
#include "input.h"
using namespace std;


int main(){
    cerr << "Hello World" << endl;
    cerr << "Complex calculator" << endl;
    cerr << "Type a letter to specify the arithmetic operator (A, S, M, D)" << endl;
    cerr << "followed by two complex numbers expressed as pairs of doubles." << endl;
    cerr << "Type Q to quit" << endl;
    compInput();
    return 0;
   
}
