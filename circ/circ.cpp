#include <iostream>
#include <cmath>

int main()
{
    double userRadius;
    const double pi = 3.14159265358979323846;
    std::cout << "radius: ";
    std::cin >> userRadius;
    std::cout << pi * std::pow(userRadius, 2);
}