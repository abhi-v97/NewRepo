#include <iostream>
#include <iomanip> // for std::setprecision() to set the precision of a float.

int main()
{
    bool a = 1;                  //Value of 1 or 0, true or false.
    char character = 'a';        //stores 256 single characters represented by your keyboard.
    unsigned short integer = 40; //unsigned means value is positive or 0.
    short shortinteger = 100;
    int integers = 7;
    long longintegers = 1000000000; //short int < int < long.
    float decimals = 3.1415;        //use float for decimals, 6 digits of precision.
    double bigfloat = 1.11111111;   //15 digits of precision. Use long double for more range.
    auto automatic = true;          //makes the compiler assign a type.

    std::cout << 5.4f << std::endl;

    // Three ways to initialise a variable in C++.
    //Define a variable as close as the first use as possible.

    int nValue = 5; // copy initialization

    int nValue1(5); // direct initialization

    int value{5}; // uniform initialization

    std::cout << std::boolalpha; // print bools as true or false

    //Use std::noboolaplha to turn it off.

    if (a == true)
    {
        std::cout << "a is true" << std::endl;
    }
    else
    {
        std::cout << "a is false" << std::endl;
    }

    //Escape sequences
    /*
    \a makes an alert
    \b moves the cursor back on space
    \f moves the cursor to next logical page
    \n moves cursor to next line
    \r moves cursor to beginning of line
    \t prints a horizontal tab
    \v prints a vertical tab
    \' prints a single quote. Can also use this for double quote, backslash or question mark.
    \(num) translates into char represented by octal
    \x(num) translates into char represented by hex
    */

    constexpr int b{3}; //use const when value can not be resolved at run time (such as requiring a user input)

    /*
    Integers are used for holding whole numbers. When using integers, keep an eye out for overflow and integer division problems. 
    Use the int type when the size of an integer doesn’t matter. 
    Use fixed-width integers when the precise size of an integer is important (either due to range or memory usage concerns).
    Floating point numbers are used for holding real numbers (which can have fractional components). 
    When using floating point numbers, keep an eye out for precision issues, rounding errors, and comparison issues.
    Boolean values hold only true and false. They do not have any major issues.
    Char values are integers that can be interpreted as an ASCII value. When using chars, be careful not to mix up ASCII code values and numbers, and watch for overflow and integer division problems.
    Use the const keyword to declare symbolic constants instead of #define. It’s safer.
    */

    return 0;
}