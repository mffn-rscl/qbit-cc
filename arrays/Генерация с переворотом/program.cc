#include <iostream>

int main()
{
    int x, y, arr[10];
    std::cin >> x >> y;
    arr[0] = x;
    arr[1] = y;

    for (int i = 2; i < 10; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for (int i = 9; i >= 0; i--)
    {
        std::cout << arr[i] << " ";
        
    }
    
    return 0;
}