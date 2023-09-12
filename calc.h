#ifndef CALC_H
#define CALC_H

#include "input.h"
#include "complex.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

void calcAdd(Complex operand1, Complex operand2);

char getSign(double result_imaginary);

void printResult(double result_real, double result_imaginary, char result_symbol);

#endif