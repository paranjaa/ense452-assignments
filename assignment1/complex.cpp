/**
 * Project: Assignment #1
 * Course: ENSE 452
 * Date: Sept 8th, 2023
 * Programmer: Alok Paranjape
 * Description: Function definitions for
 * the Complex class, which is just two constructors 
 * and a print function to demonstrate them
 * Decided against trying to make calculations
 * member functions, so I seperated them off early on  
*/
#include "complex.h"
#include "input.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
        re = 4.2;
        im = 2.4;
}
Complex::Complex(double new_re, double new_im)
{   
        re = new_re;
        im = new_im;
}

void Complex::print_values()
{
        cerr << re << endl;
        cerr << im << endl;
}



