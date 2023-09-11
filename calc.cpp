#include "input.h"
#include "complex.h"
#include "calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

void calcAdd(Complex operand1, Complex operand2)
{
    double result_real = (operand1.real + operand2.real);
    double result_imaginary = (operand1.imaginary + operand2.imaginary);
    cout << "The real value is " << result_real << endl;
    cout << "The imaginary value is " << result_imaginary << endl;
}