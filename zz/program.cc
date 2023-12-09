#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    char targetChar = 'z';

    for (int i = 0; i < str.length(); ++i) 
    {
        if (str[i] == targetChar)
        {
            str.insert(i + 1, 1, targetChar);
            ++i;
        }
    }

    std::cout << str << std::endl;

    return 0;
}
