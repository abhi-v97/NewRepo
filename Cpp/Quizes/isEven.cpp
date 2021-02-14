//Simple test to experiment with the modulus operator.

#include <iostream>

void isEven(int x)
{
    if (x % 2 == 0)
    {
        std::cout << "Yes, the number is even.\n";
    }
    else
    {
        std::cout << "No, the number is odd.\n";
    }
}

int main()
{
    std::cout << "Test 3\n";

    int x;
    std::cout << "Enter a number: \n";
    std::cin >> x;

    isEven(x);

    return 0;
}