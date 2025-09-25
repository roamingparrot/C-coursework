#include <iostream>

void swap (int* first, int* second) 
{
    int temp = *second;
    *second = *first;
    *first = temp;
}

int main()
{
    int var1 = 2;
    int var2 = 1;

    swap (&var1, &var2);

    std::cout << var1 << " " << var2;
}