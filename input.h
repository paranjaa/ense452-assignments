#ifndef INPUT_H
#define INPUT_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


void printResult(double result_real, double result_imaginary, char result_sign);

char getSign(double result_imaginary);

void compAddition(double x_1, double i_1, double x_2, double i_2);

void compInput(void);

#endif
