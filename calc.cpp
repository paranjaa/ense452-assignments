#include "input.h"
#include "complex.h"
#include "calc.h"
#include <iostream>
using namespace std;


char get_sign(double result_im)
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

void print_result(double result_re, double result_im, char result_sign)
{
    cout << result_re;
    cout << " " << result_sign << " j ";
    cout << abs(result_im);
}

void calc_add(Complex op1, Complex op2)
{
    double result_re = (op1.re + op2.re);
    double result_im = (op1.im + op2.im);
    char result_sign = get_sign(result_im);
    print_result(result_re, result_im, result_sign);
}

void calc_subtract(Complex op1, Complex op2)
{
    double result_re = (op1.re - op2.re);
    double result_im = (op1.im - op2.im);
    char result_sign = get_sign(result_im);
    print_result(result_re, result_im, result_sign);
}

void calc_multiply(Complex op1, Complex op2)
{

    double result_re = (op1.re * op2.re) - 
    (op1.im * op2.im);
    double result_im = (op1.re * op2.im)
     + (op1.im * op2.re);
    char result_sign = get_sign(result_im);
    print_result(result_re, result_im, result_sign);
}

void calc_divide(Complex op1, Complex op2)
{

    double result_re = ( ( (op1.re * op2.re) + (op1.im*op2.im) ) /
    ( (op2.re * op2.re) + (op2.im * op2.im) ));

   
    double result_im = ( ( (op1.im*op2.re) - (op2.im*op1.re) ) /
    ( (op2.re * op2.re) + (op2.im * op2.im) ));


    char result_sign = get_sign(result_im);
    
    print_result(result_re, result_im, result_sign);

}



