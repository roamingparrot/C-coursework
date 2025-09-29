#include <iostream>
#include <string>
#include <set>
#include <cctype>

void cleanLang(std::string& userInp)
{
    std::set<std::string> banList {"capitalism"};
    for (int i = 0; i < userInp.length(); i++)
    {
        userInp[i] = std::tolower(userInp[i]);
    }

    for (std::string word : banList)
    {
        int pos {};
        while ((pos = userInp.find(word)) != std::string::npos)
            userInp.replace(pos, word.length(), word.length(), '*');    
    }
}

int main()
{
    std::string input;
    std::getline(std::cin, input);

    cleanLang(input);
    std::cout << input;
}