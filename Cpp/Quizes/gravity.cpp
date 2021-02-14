//Simple program that calculates distance fallen of a ball from a tower. 

#include <iostream>
#include "constants.h"

using namespace constants;

double getHeight()
{
    std::cout << "Enter the height of the tower: \n";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

double findHeight(double towerHeight, int s)
{
    double distanceFallen;
    distanceFallen = (s * s * constants::gravtiy) / 2;
    double currentHeight = towerHeight - distanceFallen;
    return currentHeight;
}

int main()
{

    std::cout << "Test 5 \n";
    int a = getHeight();

    for (int x = 0; x < 50; x++)
    {
        double height = findHeight(a, x);

        if (height > 0)
        {
            std::cout << "At " << x << " seconds, the ball is at height: " << height << " metres.\n";
        }
        else
        {
            std::cout << "At " << x << " seconds, the ball is on the ground.\n";
            return 0;
        }
    }
}