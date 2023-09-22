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
//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;


//Different method for counting, used sstream instead, like this example
//https://www.geeksforgeeks.org/stringstream-c-applications/
int countWords(string input)
{
    stringstream strm(input);
    int count = 0;
    string word;
    while(strm >> word)
        ++count;
    return count;
}


void compInput(void)
{
    char operation;
    double re1;
    double im1;
    double re2;
    double im2;

    int size = 40;


    while(1)
    {
        cerr << "Enter exp:";
        char input[size];
        fgets(input, size, stdin);


        sscanf(input, "%c %lf %lf %lf %lf", &operation, &re1, &im1, &re2, &im2);
        
        //get the first non space/non tab character for operator
        //since sscanf can't differentiate it
        for(int i = 0; i < size; i++)
        {
            if(input[i] != ' ' && input[i] != '\t')
            {
                operation = input[i];
                break;
            }
        }
        // cerr << operation << endl;
        // cerr << re1 << endl;
        // cerr << im1 << endl;
        // cerr << re2 << endl;
        // cerr << im2 << endl;


        if(operation == 'q' || operation == 'Q')
        {
            cerr << "Closing the calculator";
            break;
        }
        
        
        if(countWords(input) < 5)
        {
            cout << "error code: 2: missing arguments"; 
            cerr << endl; 
            continue;
        }

        if(countWords(input) > 5)
        {
            cout << "error code: 3: extra arguments";  
            cerr << endl; 
            continue;
        }

        if( (re2 == 0 && im2 == 0) && (operation == 'D' || operation == 'd') )
        {
            cout << "error code: 4: divide by zero";
            cerr << endl;
            continue;
        }

        
        if(operation != 'a' && operation != 's' && operation != 'm' && 
        operation != 'd'  && operation != 'q' && operation != 'A' &&
         operation != 'S' && operation != 'M' && operation != 'D' &&
        operation != 'Q')
        {
            cout << "error code: 1: illegal command";
            cerr << endl; 
            continue;
        }

        if(operation == 'a' || operation == 'A' )
        {
            Complex comp1(re1, im1);
            Complex comp2(re2, im2);
            calcAdd(comp1, comp2);
            cerr << endl;
            continue;
        }

        if(operation == 's' || operation == 'S' )
        {
            Complex comp1(re1, im1);
            Complex comp2(re2, im2);
            calcSubtract(comp1, comp2);
            cerr << endl;
            continue;
        }

        if(operation == 'm' || operation == 'M' )
        {
            Complex comp1(re1, im1);
            Complex comp2(re2, im2);
            calcMultiply(comp1, comp2);
            cerr << endl;
            continue;
        }

        if(operation == 'd' || operation == 'D' )
        {
            Complex comp1(re1, im1);
            Complex comp2(re2, im2);
            calcDivide(comp1, comp2);
            cerr << endl;
            continue;
        }
        


        




        /*
  
        

        

      
        

        if(operation == 'q' || operation == 'Q' )
        {
            cout << endl << "Closing the calculator";
            return;
        }*/
        

    }


 
}