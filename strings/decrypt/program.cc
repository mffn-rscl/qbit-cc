#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> array;

    for (int i = 0; i < n; i++)
    {
        int element;
        std::cin >> element;
        array.push_back(element); 
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << static_cast<char>(array[i]);
    }

    return 0;
}

