#include <iostream>
#include <algorithm>
int main()
{
    char a, b;
    std::cin >> a >> b;

    int Ia = a;
    int Ib = b;
    for (int i = std::min(Ia,Ib); i <= std::max(Ia, Ib); i++)
    {
        std::cout << static_cast<char>(i-32) << static_cast<char>(i) << " ";
    }

    return 0;
}