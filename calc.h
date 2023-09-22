/**
 * Project: Assignment #1
 * Course: ENSE 452
 * Date: Sept 8th, 2023
 * Programmer: Alok Paranjape
 * Description: Header file for calc.cpp
 * has the function signatures for
 * calculating operations and printing their results  
*/

#ifndef CALC_H
#define CALC_H

/**
 * Helper function for printing the result
 * Printed so that the imaginary has a j behind it
 * Takes it and returns the sign so it can be
 * + j or - j as needed
 */
char get_sign(double result_imaginary);

/**
 * Takes the two results and prints them out in the right format to stdout
 * real + j imaginary
 * Uses get_sign to figure out what goes before j
 */
void print_result(double result_real, double result_imaginary);

/**
 * Takes two Complex variables and calculates the sum of
 * their respective real/imaginary parts, then calls print_result to show it
 */ 
void calc_add(Complex op1, Complex op2);

/**
 * Takes two Complex variables and calculates the difference between
 * their respective real/imaginary parts 
 * then calls print_result to show it
 */ 
void calc_subtract(Complex op1, Complex op2);

/**
 * Takes two Complex variables and calculates the product between them,
 * Then calls print_result to show it
 * Uses FOIL make sure each part multiplies right with each other part
 */ 
void calc_multiply(Complex op1, Complex op2);

/**
 * Takes two Complex variables and calculates the quotient between
 * them, then calls print_result to show it
 * Uses FOIL make sure each part multiplies right with each other part
 * Assumes that the Complex variables are already cleared from input to 
 * not cause a div by 0 error
 */ 
void calc_divide(Complex op1, Complex op2);

#endif