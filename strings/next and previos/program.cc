#include <iostream>
#include <string>
int main()
{
    char symbol;
    std::cin >> symbol;
    int ASCII_NEXT_SYMBOL = symbol + 1;
    int ASCII_PREVIOUS_SYMBOL = symbol - 1;

    std::cout << "The next char for '" << symbol << "' (" << static_cast<int>(symbol)  << ") is '" << static_cast<char>(ASCII_NEXT_SYMBOL) << "' (" <<ASCII_NEXT_SYMBOL << ")." << std::endl;
    std::cout << "The previous char for '" << symbol << "' (" << static_cast<int>(symbol) << ") is '" << static_cast<char>(ASCII_PREVIOUS_SYMBOL) << "' (" <<ASCII_PREVIOUS_SYMBOL << ")." << std::endl;

    return 0;
}