/**
 * Project: Assignment #1
 * Course: ENSE 452
 * Date: Sept 8th, 2023
 * Programmer: Alok Paranjape
 * Description: Handles the values inside
 * of Complex, including each operation
 * and checking the sign before printing them
*/

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

void print_result(double result_re, double result_im)
{
        char result_sign = get_sign(result_im);
        cout << result_re;
        cout << " " << result_sign << " j ";
        cout << abs(result_im);
        cerr << endl;
}

void calc_add(Complex op1, Complex op2)
{
        double result_re = (op1.re + op2.re);
        double result_im = (op1.im + op2.im);
        
        print_result(result_re, result_im);
}

void calc_subtract(Complex op1, Complex op2)
{
        double result_re = (op1.re - op2.re);
        double result_im = (op1.im - op2.im);

        print_result(result_re, result_im);
}

void calc_multiply(Complex op1, Complex op2)
{
        //Using FOIL to multiply the two complex numbers
        //piece by piece, without converting to polar form
        double result_re = (op1.re * op2.re) - 
        (op1.im * op2.im);
        double result_im = (op1.re * op2.im)
        + (op1.im * op2.re);

        print_result(result_re, result_im);
}

void calc_divide(Complex op1, Complex op2)
{
        //Like multiply, but sourced the complex division formula from here:
        //https://books.physics.oregonstate.edu/LinAlg/division.html
        //Had to check it a lot to not mix up each operand

        double result_re = ( ( (op1.re * op2.re) + (op1.im*op2.im) ) /
        ( (op2.re * op2.re) + (op2.im * op2.im) ));

        double result_im = ( ( (op1.im*op2.re) - (op2.im*op1.re) ) /
        ( (op2.re * op2.re) + (op2.im * op2.im) ));

        
        print_result(result_re, result_im);
}



