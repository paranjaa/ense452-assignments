/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
  this file is for taking user input
*/

#include "input.h"
#include "complex.h"
#include "calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

using namespace std;






void compInput(void)
{
    //max length as 20 for now
     

    //printf("string %s\n", buf);

    char operation = '?';
    double x1;
    double i1;
    double x2;
    double i2;

    while(operation != 'q' || operation != 'Q')
    {
        cout << "Enter exp:";
        char input[40];
        // using fgets get the input from stdin
        fgets(input, 40, stdin);

        sscanf(input, "%c %lf %lf %lf %lf", &operation, &x1, &i1, &x2, &i2);
        if(operation == 'a' || operation == 'A' )
        {
            // cout << endl << "Addition" << endl;
            Complex comp1(x1, i1);
            Complex comp2(x2, i2);
            calcAdd(comp1, comp2);

        }

        if(operation == 's' || operation == 'S' )
        {
            cout << endl << "Substraction" << endl;
        }

        if(operation == 'm' || operation == 'M' )
        {
            cout << endl << "Multipliction" << endl;
        }

        if(operation == 'd' || operation == 'D' )
        {
            cout << endl << "Division" << endl;
        }

        if(operation == 'q' || operation == 'Q' )
        {
            cout << endl << "Closing the calculator";
            return;
        }

    }


 
}