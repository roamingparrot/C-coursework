#include <iostream>

int main()
{
    int placeHolder[5] {1, 2, 3, 4, 5};
    int userInp;
    std::cin >> userInp;

    for (int i = 0; i < sizeof(placeHolder)/sizeof(placeHolder[0]); i++)
    {
        if (placeHolder[i] == userInp)
        {
            std::cout << i + 1;
            return 0;
        }
    }
    std::cout << "-1";
    return 0;
}