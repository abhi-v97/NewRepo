#include <iostream> // Provides functions for performing input and output operations.
#include <cstdlib>  //Contains functions for changing data types, rand no generation, memory management, etc.
#include <string>   // Allows you to use STL string class.
#include <vector>
#include <sstream>

//Preprocessor directives, loads file with premade functions.

int g_iRandNum = 0;        //Global variable, can be accessed anywhere in the code
const double pi = 3.14159; //const defines constant values that won't change.

int main()
{

#pragma region Data Types

    bool boolean = 1;                //Value of 1 or 0, true or false.
    char character = 'a';            //stores 256 single characters represented by your keyboard.
    unsigned short int integer = 40; //unsigned means value is positive or 0.
    short int shortinteger = 100;
    int integers = 7;
    long longintegers = 1000000000; //short int < int < long.
    float decimals = 3.1415;        //use float for decimals, 6 digits of precision.
    double bigfloat = 1.11111111;   //15 digits of precision. Use long double for more range.
    auto automatic = true;          //makes the compiler assign a type.

    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.12345, "hello");
    //char, int, 5 space rigt justified int, 3 decimal float, string specifier

#pragma endregion

#pragma region Strings and math operators

    std::string strings("this is a string: "); //Create a string

    std::string sNum1, sNum2; //create empty string

    std::cout << "Enter Number 1 : ";
    getline(std::cin, sNum1); //Recieve user input

    std::cout << "Enter Number 2 : ";
    getline(std::cin, sNum2);

    // Convert from strings to int
    // std::stod converts from strings to doubles
    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);

    // Math Operators
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

#pragma endregion

#pragma region Conditional and Logical Operators
    // Conditional operators help you to perform different actions depending on conditions
    // ==, !=, <, >, <=, >=

    // Logical operators allow you to combine conditions
    // && : If both are true it returns true
    // || : If either are true it returns true
    // ! : Converts true into false and vice versa

#pragma endregion

    // if and else used to execute code based on certain conditions
    if ((nNum1 >= 1) && (nNum2 <= 18))
    {
    }
    else if (nNum1 >= 65)
    {
    }
    else
    {
    }

    return 0;
}