/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: Making a complex-calculator with a command line
  this file is for taking user input
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void printResult(double result_real,
double result_imaginary, char result_sign)
{
    cout << result_real;
    cout << " " << result_sign << " j ";
    cout << abs(result_imaginary);
}

char getSign(double result_imaginary)
{
    if(result_imaginary < 0)
    {
        return '-';
    }
    else
    {
        return '+';
    }

}

void compAddition(double x_1, double i_1,
double x_2, double i_2)
{
    double result_real = (x_1 + x_2);
    double result_imaginary = (i_1 + i_2);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
    return;
}




void compInput(void)
{

    int c = 0;
    cout << "Enter exp:";

    while ((c = getc(stdin)) != EOF) 
    {
        if (c =='a' || c == 'A') 
        {
            cout << "Addition" << endl;
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
}