#include <iostream>

bool solution()
{
    int n;
    std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    
    for (int j = 1; j < n; j++)
    {
    if (arr[j-1]*arr[j] > 0)
    {
        return true;
    }
    }
    return false;
}

int main()
{
    int k;
    std::cin >> k;

    for (int i = 0; i < k; i++)
    {
        (solution()) ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
    }
    
    return 0;
}