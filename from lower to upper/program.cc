#include <iostream>
using namespace std;

int main()
{
    char symbol;
    std::cin >> symbol;
    int serialNumber = symbol;

    if (serialNumber <= 90)
    {
        std::cout << static_cast<char>(serialNumber + 32);
    }
    else
    {
        std::cout << static_cast<char>(serialNumber - 32);

    }
    return 0;
}