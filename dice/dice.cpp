#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(nullptr));
    short diceRolled;
    do
    {
        diceRolled = rand() % 7;
    } while (diceRolled == 0);
    
    std::cout << diceRolled;

    return 0;
}