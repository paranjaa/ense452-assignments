#include "complex.h"
#include "input.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
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

    void Complex::printValues()
    {
        cerr << re << endl;
        cerr << im << endl;
    }



