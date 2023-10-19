README:
I've been using these commands for building and compiling:
g++ .\queue.cpp .\queue.h .\testq.cpp -o output
./output.exe

Used this command later on to check for errors (mostly just for unsigned):
g++ -Wextra -Wall -Wfloat-equal -Wconversion -Wparentheses -pedantic -Wunused-parameter -Wunused-variable -Wreturn-type -Wunused-function -Wredundant-decls -Wreturn-type -Wunused-value -Wswitch-default -Wuninitialized .\queue.cpp .\queue.h .\testq.cpp -o output
