/**
 * Project: Assignment #1
 * Course: ENSE 452
 * Date: Sept 8th, 2023
 * Programmer: Alok Paranjape
 * Description: Header file for complex class
 * defines the variables and signatures for Complex
 * which isn't a lot, since I kept the calculations split off
*/
#ifndef COMPLEX_H
#define COMPLEX_H



class Complex{
        public:
        double re; //the real part of the complex number
        double im; //the imaginary part of the complex number
        Complex(); //default constructor, sets the members as a specfic value
        //the other constructor puts in given variables, used for each operand
        Complex(double new_re, double new_im); 
        //prints the two member variables, without the proper formatting
        void print_values();
};


#endif