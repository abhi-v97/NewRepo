//Test done to understand IO in C++.

#include <iostream>

int readNumber()
{
    std::cout << "Enter a number : ";
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int y)
{
    std::cout << "Output: " << y << std::endl;
}

int main()
{   
    int a = readNumber();
    int b = readNumber();
    writeAnswer(a + b);
    return 0;
}
