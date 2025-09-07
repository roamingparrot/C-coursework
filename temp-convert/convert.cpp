#include <iostream>

double converter(double farenheight)
{
    double celsius = (farenheight - 32) * (5.0 / 9.0);
    return celsius;
}

int main() 
{
    double userTemp;
    std::cout << "enter farenheight temp to convert to celsius: ";
    std::cin >> userTemp;
    std::cout << "\n" <<userTemp << " farenheight is equal to " << converter(userTemp) << " degrees celsius";
}