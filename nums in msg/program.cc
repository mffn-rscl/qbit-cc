#include <iostream>
#include <string>

int main()
{
    int length;
    std::cin >> length;
    std::cin.ignore(); 

    std::string str;
    getline(std::cin, str);

    int checker = 0, sum = 0, counter = 0;
    for (int i = 0; i < length; i++)
    {
        checker = static_cast<int>(str[i]);
        if (checker >= 48 && checker <= 57)
        {
            counter++;
            checker = checker - static_cast<int>('0');
            sum = sum + checker;
        }
    }
    std::cout << counter << std::endl << sum << std::endl; 

    return 0;
}
