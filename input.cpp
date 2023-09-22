/**
  Project: Assignment #1
  Course: ENSE 452
  Date: Sept 8th, 2023
  Programmer: Alok Paranjape
  Description: 
*/

#include "input.h"
#include "complex.h"
#include "calc.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;


//Based on code from this example:
//https://www.geeksforgeeks.org/stringstream-c-applications/
//Takes the number 
int count_words(string input)
{
        stringstream strm(input);
        int count = 0;
        string word;
        while(strm >> word)
        {
                ++count;
        }
        return count;
}

//based on code from this example
//https://stackoverflow.com/questions/4010240/comparing-doubles
bool compare_double_0(double a)
{
        //could probably increase the precision here to
        //berrer check for zero
        if ( std::abs(a - 0) < 0.0000001 )
        {
                return true;
        }
        else
        {
                return false;
        }
}


void comp_input(void)
{
        char operation;
        double re1;
        double im1;
        double re2;
        double im2;

        //set this as const so it wouldn't be used to 
        //make a variably sized array
        const int size = 40;

        while(1)
        {
                cerr << "Enter exp:";
                char input[size];

                //using fgets specfically because it can handle empty input
                //without getting upset
                fgets(input, size, stdin);

                //after switching to using sstream (instead of sscanf)
                //copied it over to a string instead
                string input_string = "";

                for(int i = 0; i < size; i++)
                {
                        input_string = input_string + input[i];
                }

                if(input_string == "")
                {
                        continue;
                }

                stringstream stream1(input_string);
                stream1 >> operation;
                stream1 >> re1;
                stream1 >> im1;
                stream1 >> re2;
                stream1 >> im2;
       
    

                if(operation == 'q' || operation == 'Q')
                {
                        cerr << "Closing the calculator";
                        break;
                }
        
                if(count_words(input) < 5)
                {
                        cout << "error code: 2: missing arguments"; 
                        cerr << endl; 
                        continue;
                }

                if(count_words(input) > 5)
                {
                        cout << "error code: 3: extra arguments";  
                        cerr << endl; 
                        continue;
                }

                if( ( compare_double_0(re2) &&  compare_double_0(im2)) 
                && (operation == 'D' || operation == 'd') )
                {
                        cout << "error code: 4: divide by zero";
                        cerr << endl;
                        continue;
                }

        
                if(operation != 'a' && operation != 's' && operation != 'm' && 
                operation != 'd'  && operation != 'q' && operation != 'A' &&
                operation != 'S' && operation != 'M' && operation != 'D' &&
                operation != 'Q')
                {
                        cout << "error code: 1: illegal command";
                        cerr << endl; 
                        continue;
                }

                if(operation == 'a' || operation == 'A' )
                {
                        Complex comp1(re1, im1);
                        Complex comp2(re2, im2);
                        calc_add(comp1, comp2);
                        cerr << endl;
                        continue;
                }

                if(operation == 's' || operation == 'S' )
                {
                        Complex comp1(re1, im1);
                        Complex comp2(re2, im2);
                        calc_subtract(comp1, comp2);
                        cerr << endl;
                        continue;
                }

                if(operation == 'm' || operation == 'M' )
                {
                        Complex comp1(re1, im1);
                        Complex comp2(re2, im2);
                        calc_multiply(comp1, comp2);
                        cerr << endl;
                        continue;
                }

                if(operation == 'd' || operation == 'D' )
                {
                        Complex comp1(re1, im1);
                        Complex comp2(re2, im2);
                        calc_divide(comp1, comp2);
                        cerr << endl;
                        continue;
                }

    }

}