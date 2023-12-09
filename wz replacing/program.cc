#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);

    for (char& ch : str) {
        if (ch == 'w') {
            ch = 'z';
        }
        else if (ch == 'z') {
            ch = 'w';
        }
    }

    std::cout << str << std::endl;

    return 0;
}