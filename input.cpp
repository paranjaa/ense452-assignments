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
#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

void compCalc(void)
{
   int c = 0;
    while ((c = getc(stdin)) != EOF) {
        if (c =='a' || c == 'A') 
        {
          //c = 'A';
          cout <<"Addition" << endl;
          //fputc(c, stdout);
        }
        if (c =='s' || c == 'S') 
        {
          //c = 'S';
          cout << "Subtraction" << endl;
          //fputc(c, stdout);
        }

        if (c =='m' || c== 'M') 
        {
          //c = 'M';
          cout << "Multiplication" << endl;
          //fputc(c, stdout);
        }

        if (c =='d' || c == 'D') 
        {
          //c = 'M';
          cout << "Division" << endl;
          //fputc(c, stdout);
        }
        if(c =='q' || c == 'Q')
        {
          cout << "Closing the calculator" << endl;
          return;
        }
       
    }
}