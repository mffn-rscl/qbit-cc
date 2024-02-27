
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s;
    getline(std::cin, s);
    std::cout << s.find(' ') + 1<< std::endl;
    return 0;
}

