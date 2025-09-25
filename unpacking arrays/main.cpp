#include <iostream>

int main()
{
    int values[3] = {10, 20, 30};
    auto [x, y, z] = values; // variables declared and assigned values corresponding to pos in array

    std::cout << x << y << z;
}