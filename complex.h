#ifndef COMPLEX_H
#define COMPLEX_H

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