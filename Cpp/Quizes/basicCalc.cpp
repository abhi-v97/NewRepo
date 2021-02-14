// Simple program that takes two numbers and a symbol as an input and does a basic calculation.

#include <iostream>

double getDouble()
{
    double a;
    std::cout << "Enter a double value: \n";
    std::cin >> a;

    return a;
}

char getSymbol()
{

    char a;
    std::cout << "Enter one of the following: +, -, *, or / \n";
    std::cin >> a;

    return a;
}

//function that adds or subtracts based on user input
void calculate(double x, double y, char z)
{

    if (z == '+')
    {
        std::cout << x << " + " << y << " is " << x + y << std::endl;
    }
    else if (z == '-')
    {
        std::cout << x << " - " << y << " is " << x - y << std::endl;
    }
    else if (z == '*')
    {
        std::cout << x << " * " << y << " is " << x * y << std::endl;
    }
    else if (z == '/')
    {
        std::cout << x << " / " << y << " is " << x / y << std::endl;
    }
    else
    {  
        std::cout << "Invalid symbol \n";
    }
}

int main()
{
    std::cout << "Test 3 \n";

    double x = getDouble();
    double y = getDouble();
    char z = getSymbol();

    calculate(x, y, z);

    std::cout << "End of program";

    return 0;
}