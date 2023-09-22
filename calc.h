#ifndef CALC_H
#define CALC_H

#include "input.h"
#include "complex.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>



char getSign(double result_imaginary);

void printResult(double result_real, double result_imaginary, char result_symbol);

void calcAdd(Complex op1, Complex op2);

void calcSubtract(Complex op1, Complex op2);

void calcMultiply(Complex op1, Complex op2);

void calcDivide(Complex op1, Complex op2);

#endif