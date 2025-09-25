#include <vector>
#include <iostream>

int main()
{
    std::vector<int> S4 = {4, 3, 2, 1, 2, 4, 9, 42, 3, 7};

    for (int j = 0; j < S4.size() -1 ; j++) 
    {
        for (int i = 0; i < S4.size() - 1; i++)
        {
                if (S4.at(i) >= S4.at(i+1))
                    std::swap(S4[i], S4.at(i+1));
        }
    }
    
    for (int i = 0; i < S4.size(); i++) 
        std::cout << S4.at(i) << " ";
        
    return 0;
}