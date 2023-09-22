#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Complex{
    public:
    double re;
    double im;
    Complex();
    Complex(double new_re, double new_im);
    void printValues();
    char getSign(double result_im);
};



#endif