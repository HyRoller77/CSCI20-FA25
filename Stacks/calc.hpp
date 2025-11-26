#include<stack>
#include<cstdio>

using std::stack;
using std::printf;

/*
stack arithmatic
single stack

prefix stacking (unstacked operations)

encode all operations b/c stack of int

ops:
    addition = 9999
    subtraction = 9998
    multiplication = 9997
    division = 10001
    
    
    function declarations are quality of life
    function declarations being in the header file make my life easier
    */

int main();

int addition (int , int);

int subtraction (int , int);

int multiplication (int , int);

int division (int , int);

// evaluates a loaded stack
stack<int> evaluate( stack<int> );