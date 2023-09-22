/**
* Project: Assignment #1
* Course: ENSE 452
* Date: Sept 8th, 2023
* Programmer: Alok Paranjape
* Description: Header file for handling the input
* has the signatures for each function used during it
*/
#ifndef INPUT_H_
#define INPUT_H_

#include <string>
using namespace std;

/**
 * takes a string from input and
 * checks how many (space seperared) words are in it
 * necessary for errors 2 and 3
 * Used to just use a loop, but it got difficult handling
 * multiple words and spaces 
 */
int count_words(string input);

/**
 * takes a double and compares it against zero
 * added this to prevent warnings when checking 
 * for div by zero errors
 * the precision is based the absolute value minus 0 and
 * by a tiny fraction 
 */ 
bool compare_double_0(double a);

/**
 * The main function for handling input
 * including reading it, splitting it into variables,
 * checking for errors and deciding which operation to call
 * could probably split some of those off into their own functions
 */ 
void comp_input(void);

/**
 * Handles the printout (and condition) for counting the arguments.
 * Using count_words as a helper, instead of it all happening in comp_input
 */ 

bool count_arguments(string input);

/**
 * Checks if the and operator numbers it read through 
 * cause a div by zero error, using compare_double_0 as a helper
 */ 
bool check_div0(double value_1, double value_2, char operation);

#endif
