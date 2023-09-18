/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
*/

#include <iostream>
#include "input.h"
//#include "complex.h"
using namespace std;


int main(){

    // cout << "Complex calculator" << endl;
    // cout << "Type a letter to specify the arithmetic operator (A, S, M, D)" << endl;
    // cout << "followed by two complex numbers expressed as pairs of doubles." << endl;
    // cout << "Type Q to quit" << endl;
    cout << "Hello World" << endl;
    string input = "a 1 2 3 1 213221 321";
    int result = countWords(input);
    cout << "There are " << result;
    cout << " words in the test sentence" << endl;
    if(result < 5)
    {
      cout << "error: too few arguements" << endl;
    }
    if(result > 5)
    {
      cout << "error: too many arguements" << endl;
    }
    return 0;
}