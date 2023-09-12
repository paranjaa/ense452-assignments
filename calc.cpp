#include "input.h"
#include "complex.h"
#include "calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


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

void printResult(double result_real, double result_imaginary, char result_sign)
{
    cout << endl;
    cout << result_real;
    cout << " " << result_sign << " j ";
    cout << abs(result_imaginary) << endl;
}

void calcAdd(Complex operand1, Complex operand2)
{
    double result_real = (operand1.real + operand2.real);
    double result_imaginary = (operand1.imaginary + operand2.imaginary);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
}

void calcSubtract(Complex operand1, Complex operand2)
{
    double result_real = (operand1.real - operand2.real);
    double result_imaginary = (operand1.imaginary - operand2.imaginary);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
}

void calcMultiply(Complex operand1, Complex operand2)
{

    double result_real = (operand1.real * operand2.real) - 
    (operand1.imaginary * operand2.imaginary);
    double result_imaginary = (operand1.real * operand2.imaginary)
     + (operand1.imaginary * operand2.real);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
}

void calcDivide(Complex operand1, Complex operand2)
{
    //need the conjugate
    Complex conjugate(operand2.real,
     (-1*(operand2.imaginary)) );

    double result_real = 1.1;
    double result_imaginary = 2.2;
    char result_sign = getSign(result_imaginary);
    
    printResult(result_real, result_imaginary, result_sign);

}



