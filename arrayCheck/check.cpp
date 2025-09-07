#include <iostream>

int main()
{
    int numbers1[5] = {1, 2, 3, 4, 5};
    int numbers2[5] = {1, 2, 3, 4, 5};
    bool isEqual = true;

    for (short i = 0; i < std::size(numbers1); i++) 
    {
        if (numbers1[i] != numbers2[i])
        {
            isEqual = false;
            break;
        }
    }

    std::cout << std::boolalpha << isEqual;
    return 0;
}