#include <iostream>  // Provides functions for performing input and output operations.
#include "BasicsHeader.h" //Header file, which houses function declarations.

//Preprocessor directives, loads file with premade functions.

//Definition of function
//Functions don't need to return a value. If they don't, void is used.
//Functions cannot be nested inside other functions
void blankFunction () {
    std::cout << "A statement inside blankFunction()" << std::endl;
}

//This function has two parameters, a and b. 
//Caller will supply the values of a and b. Default values can be set to anything.
int add (int a = 0, int b = 0){
    return a + b;
}

int main() {

    //An object in C++ is a piece of memory used to store values
    //A variable is simply an object with a name.
    //Defining a variable
    int x;

    //Assigning the variable a value
    x = 7;

    // Statement: smallest independent unit, a sentence which tells the compiler to perform a task.
    std::cout << "Hello World!" << std::endl; 

    //Make a function call to blankFunction(). main() is the caller
    blankFunction();

    std::cout << add (2,3) << std::endl;

    //Return statement: main() function sends a value back to OS to indicate whether the program finished successfully or not.
    return 0;
}