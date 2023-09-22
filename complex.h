#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
    public:
    double re;
    double im;
    Complex();
    Complex(double new_re, double new_im);
    void print_values();
    char get_sign(double result_im);
};



#endif