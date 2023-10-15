/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Main file for the assignment
  prints out introductory text to stderr
  then goes into the rest of the code with
  comp_input()
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
    comp_input();
    return 0;
}
