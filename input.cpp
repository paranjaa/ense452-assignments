/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
  this file is for taking user input
*/

#include "input.h"
//#include "complex.h"
//#include "calc.h"
//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
#include <iostream>

using namespace std;


//based on code from https://stackoverflow.com/questions/24841066/counting-words-in-a-string
int countWords(string input)
{
    int count = 0;
    char previous = ' ';
    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] != ' ' && previous == ' ')
        {
            count++;
        }
        previous = input[i];
    }
    return count;
}

/*
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
        
        cout << operation << endl;
        cout << x1 << endl;
        cout << i1 << endl;
        cout << x2 << endl;
        cout << i2 << endl;

        //check for any non operators
        /*
        if(operation != 'a' || operation != 's' || operation != 'm' || 
        operation != 'd'  || operation != 'q' || operation != 'A' ||
         operation != 'S' || operation != 'M' || operation != 'D' ||
        operation != 'Q')
        {
            cout << "error code 1: illegal command" << endl; 
        }
        if(operation == 'a' || operation == 'A' )
        {
            // cout << endl << "Addition" << endl;
            Complex comp1(x1, i1);
            Complex comp2(x2, i2);
            calcAdd(comp1, comp2);
        }

        if(operation == 's' || operation == 'S' )
        {
            Complex comp1(x1, i1);
            Complex comp2(x2, i2);
            calcSubtract(comp1, comp2);

        }

        if(operation == 'm' || operation == 'M' )
        {
            Complex comp1(x1, i1);
            Complex comp2(x2, i2);
            calcMultiply(comp1, comp2);
        }

        if(operation == 'd' || operation == 'D' )
        {
            //check for div by zero
            if(x2 == 0 && i2 == 0)
            {
                cout << "error code: 4: divide by zero" << endl;
            }
            cout << endl << "Division" << endl;
        }
        

        if(operation == 'q' || operation == 'Q' )
        {
            cout << endl << "Closing the calculator";
            return;
        }
        

    }


 
}*/