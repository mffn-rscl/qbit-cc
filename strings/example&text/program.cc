#include <iostream>
#include <string>
#include <climits>
#include <algorithm>

int main()
{
    std::string str, subStr, solution = "";
    getline(std::cin, subStr);
    getline(std::cin, str);

    int k;
    std::cin >> k;

    str = str.substr(k - 1, subStr.length());
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == subStr[i])
        {
            solution += subStr[i];
            if (solution == subStr)
            {
                std::cout << "YES" << std::endl;
                std::cout << i + 1 << std::endl;
                break;
            }
        }
        else
        {
            std::cout << "NO" << std::endl;
            std::cout << i + 1 << std::endl;
            break;
        }
    }

    

    return 0;
}
