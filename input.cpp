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

void calcAddition(void)
{
  cout <<"Addition" << endl;
  int op1, op2;
  cin >> op1;
  cin >> op2;
  int result;
  cout << (op1 + op2) << endl;
  return;
}

void compCalc(void)
{

  int c = 0;
  cout << "Enter exp:";
  while ((c = getc(stdin)) != EOF) {
      if (c =='a' || c == 'A') 
      {
        //c = 'A';
        calcAddition();
        //fputc(c, stdout);
      }
      
      if (c =='s' || c == 'S') 
      {
        //c = 'S';
        cout << "Subtraction" << endl;
        //fputc(c, stdout);
      }

      if (c =='m' || c == 'M') 
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