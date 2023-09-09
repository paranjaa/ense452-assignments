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
        if (c=='a') c = 'A';
        fputc(c, stdout);
    }
}