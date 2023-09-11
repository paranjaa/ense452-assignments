/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
*/

#include <iostream>
#include "input.h"
#include "complex.h"
using namespace std;

/*
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    MyClass()
    {
      myNum = 3;
      myString = "string1";
    }
    MyClass(int newNum, string newString)
    {
      myNum = newNum;
      myString = newString;
    }
    void printNum()
    {
      cout << "asodaisusa" << endl;
      cout << myNum;
      cout << myString;
    }

};*/

int main(){
    //cout << "Hello World, this is the main file" << endl;
    cout << "Complex calculator" << endl;
    cout << "Type a letter to specify the arithmetic operator (A, S, M, D)" << endl;
    cout << "followed by two complex numbers expressed as pairs of doubles." << endl;
    cout << "Type Q to quit" << endl;
    compInput();
    return 0;
}