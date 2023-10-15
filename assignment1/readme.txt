README:
I've been using these for building and compiling. 
Tried to use a makefile, but can't seem to get make to install properly
g++ main.cpp input.cpp complex.cpp calc.cpp -o calculatorOutput
.\calculatorOutput

Also used this command later on to get the warnings and fix them 
g++ -Wextra -Wall -Wfloat-equal -Wconversion -Wparentheses -pedantic -Wunused-parameter -Wunused-variable -Wreturn-type -Wunused-function -Wredundant-decls -Wreturn-type -Wunused-value -Wswitch-default -Wuninitialized -Winit-self main.cpp input.cpp complex.cpp calc.cpp -o calculatorOutput


