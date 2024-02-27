#include <iostream>
#include <string>

int main()
{
    std::string str;
    getline(std::cin, str);
    int a, b;
    std::cin >> a >> b;

    std::cout << str.erase(a - 1, b - a + 1);
    return 0;
}