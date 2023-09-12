#include "complex.h"
#include "input.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

    Complex::Complex()
    {
        real = 4.2;
        imaginary = 2.4;
    }
    Complex::Complex(double newReal, double newImaginary)
    {
        real = newReal;
        imaginary = newImaginary;
    }

    void Complex::printValues()
    {
        cout << real << endl;
        cout << imaginary << endl;
    }




