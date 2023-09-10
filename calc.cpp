#include "calc.h"
#include "input.h"
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

void compAddition(double x_1, double i_1, double x_2, double i_2)
{
    double result_real = (x_1 + x_2);
    double result_imaginary = (i_1 + i_2);
    char result_sign = getSign(result_imaginary);
    printResult(result_real, result_imaginary, result_sign);
}