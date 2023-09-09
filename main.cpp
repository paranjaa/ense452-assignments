/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
*/

#include <iostream>
#include "input.cpp"
using namespace std;

int add(int x, int y);

void compCalc(void);

int main(){
    //cout << "Hello World, this is the main file" << endl;
    cout << "Complex calculator" << endl;
    cout << "Type a letter to specify the arithmetic operator (A, S, M, D)" << endl;
    cout << "followed by two complex numbers expressed as pairs of doubles." << endl;
    cout << "Type Q to quit" << endl;

    //std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    compCalc();
    return 0;
}