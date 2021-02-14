//simple program that checks if a single digit is prime or not, crudely. 

#include <iostream>

bool isPrime(int x)
{

    if (x == 2 or x == 3 or x == 5 or x == 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y;
    std::cout << "Test 2" << std::endl;
    std::cout << "Enter a single digit: " << std::endl;
    std::cin >> x;

    bool a = isPrime(x);

    if (a == true)
    {
        std::cout << "This is a prime number" << std::endl;
    }
    else
    {
        std::cout << "This is not a prime number" << std::endl;
    }

    return 0;
}