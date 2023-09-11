#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Complex{
    public:
    double real;
    double imaginary;
    Complex();
    Complex(double newReal, double newImaginary);
    void printValues();
        //void createValues(double newReal, double newImaginary);
        //void calculate();
        //char getSign(double result_imaginary);

       // void compAddition(double x_1, double i_1, double x_2, double i_2);
};



#endif