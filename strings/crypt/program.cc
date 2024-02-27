#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore(); 

    std::string str;
    getline(std::cin, str);

    for (int i = 0; i < n && i < str.length(); i++)
    {
        std::cout << static_cast<int>(str[i]) << " ";
    }
    return 0;
}