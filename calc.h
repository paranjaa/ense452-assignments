#ifndef CALC_H
#define CALC_H

char get_sign(double result_imaginary);

void printResult(double result_real, double result_imaginary, char result_symbol);

void calc_add(Complex op1, Complex op2);

void calc_subtract(Complex op1, Complex op2);

void calc_multiply(Complex op1, Complex op2);

void calc_divide(Complex op1, Complex op2);

#endif