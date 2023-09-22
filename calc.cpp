#include "input.h"
#include "complex.h"
#include "calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


char getSign(double result_im)
{
    if(result_im < 0)
    {
        return '-';
    }
    else
    {
        return '+';
    }

}

void printResult(double result_re, double result_im, char result_sign)
{
    cout << result_re;
    cout << " " << result_sign << " j ";
    cout << abs(result_im);
}

void calcAdd(Complex op1, Complex op2)
{
    double result_re = (op1.re + op2.re);
    double result_im = (op1.im + op2.im);
    char result_sign = getSign(result_im);
    printResult(result_re, result_im, result_sign);
}

void calcSubtract(Complex op1, Complex op2)
{
    double result_re = (op1.re - op2.re);
    double result_im = (op1.im - op2.im);
    char result_sign = getSign(result_im);
    printResult(result_re, result_im, result_sign);
}

void calcMultiply(Complex op1, Complex op2)
{

    double result_re = (op1.re * op2.re) - 
    (op1.im * op2.im);
    double result_im = (op1.re * op2.im)
     + (op1.im * op2.re);
    char result_sign = getSign(result_im);
    printResult(result_re, result_im, result_sign);
}

void calcDivide(Complex op1, Complex op2)
{
    //new formula
    //double result_re = 1.1;
    //double result_im = 2.2;
    //  double x3 = ((x1*x2 + y1*y2) / ((x2*x2) + (y2*y2)));
    
    
    
    // double y3 = ((y1*x2 - y2*x1)/
    // ((x2*x2) + (y2*y2))); 

    double result_re = ( ( (op1.re * op2.re) + (op1.im*op2.im) ) /
    ( (op2.re * op2.re) + (op2.im * op2.im) ));

    double result_im = ( ( (op1.im*op1.re) - (op2.im*op1.re) ) /
    ( (op2.re * op2.re) + (op2.im * op2.im) ));


    char result_sign = getSign(result_im);
    
    printResult(result_re, result_im, result_sign);

}



