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



void compAddition(double x_1, double i_1,
double x_2, double i_2);

void compCalc(void);

int main(){
    //cout << "Hello World, this is the main file" << endl;
    cout << "Complex calculator" << endl;
    cout << "Type a letter to specify the arithmetic operator (A, S, M, D)" << endl;
    cout << "followed by two complex numbers expressed as pairs of doubles." << endl;
    cout << "Type Q to quit" << endl;

    //std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    //compInput();
    compAddition(45.67, -170, 9.2, 15);
    return 0;
}