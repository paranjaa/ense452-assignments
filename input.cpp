/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
  this file is for taking user input
*/

#include "input.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

using namespace std;



void printResult(double result_real, double result_imaginary, char result_sign)
{
    cout << result_real;
    cout << " " << result_sign << " j ";
    cout << abs(result_imaginary);
}


void compInput(void)
{
    cout << "Enter exp:";
    //max length as 20 for now
    char buf[40];
    // using fgets get the input from stdin
    fgets(buf, 40, stdin);
    //printf("string %s\n", buf);

    char operation;
    double x1;
    double x2;
    double x3;
    double x4;

    sscanf(buf, "%c %lf %lf %lf %lf", &operation, &x1, &x2, &x3, &x4);
    cout << operation << endl;
    cout << x1 << endl;
    cout << x2 << endl;
    cout << x3 << endl;
    cout << x4 << endl;
    //compAddition(1.0,2.0,3.0,4.0);


    return;

    /*
    int c = 0;
    while ((c = getc(stdin)) != EOF) 
    {
        if (c =='a' || c == 'A') 
        {
            cout << "Addition" << endl;
            double value1, value2, value3, value4;
            cin >> value1;
            cin >> value2;
            cin >> value3;
            cin >> value4;            
            //compAddition();
        }
        if (c =='s' || c == 'S') 
        {
            cout << "Subtraction" << endl;
        }

        if (c =='m' || c == 'M') 
        {
            cout << "Multiplication" << endl;
        }

        if (c =='d' || c == 'D') 
        {
            cout << "Division" << endl;
        }
        if(c =='q' || c == 'Q')
        {
            cout << "Closing the calculator" << endl;
            return;
        }
    }
    */
}