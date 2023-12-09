#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    std::string str;
    getline(std::cin, str);

    int n, m;
    std::cin >> n >> m;
    if (n > m)
    {
        std::cout << 0;
        return 0;
    }
    std::cout << m - n + 1 << std::endl;
    for (int i = n-1; i < m; i++)
    {
        std::cout << str[i];
    }
    return 0;
}