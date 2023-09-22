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
    cout << result_real;
    cout << " " << result_sign << " j ";
    cout << abs(result_imaginary);
}

void calcAdd(Complex op1, Complex op2)
{
    double result_real = (op1.real + op2.real);
    double result_imaginary = (op1.imaginary + op2.imaginary);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
}

void calcSubtract(Complex op1, Complex op2)
{
    double result_real = (op1.real - op2.real);
    double result_imaginary = (op1.imaginary - op2.imaginary);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
}

void calcMultiply(Complex op1, Complex op2)
{

    double result_real = (op1.real * op2.real) - 
    (op1.imaginary * op2.imaginary);
    double result_imaginary = (op1.real * op2.imaginary)
     + (op1.imaginary * op2.real);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
}

void calcDivide(Complex op1, Complex op2)
{

    double result_real = ( ( (op1.real * op2.real) + (op1.imaginary*op2.imaginary) ) /
    ( (op2.real * op2.real) + (op2.imaginary * op2.imaginary) ));
    //new formula
    //double result_real = 1.1;
    //double result_imaginary = 2.2;
    //  double x3 = ((x1*x2 + y1*y2) / ((x2*x2) + (y2*y2)));
    
    
    
    // double y3 = ((y1*x2 - y2*x1)/
    // ((x2*x2) + (y2*y2))); 





    double result_imaginary = ( ( (op1.imaginary*op1.real) - (op2.imaginary*op1.real) ) /
    ( (op2.real * op2.real) + (op2.imaginary * op2.imaginary) ));


    char result_sign = getSign(result_imaginary);
    
    printResult(result_real, result_imaginary, result_sign);

}



