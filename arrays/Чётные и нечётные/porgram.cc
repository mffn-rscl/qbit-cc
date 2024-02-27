#include <iostream>

int main()
{
    int len;
    std::cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        std::cin >> arr[i];
    
        if(arr[i] % 2 == 0) std::cout << arr[i] << " ";
    }

    for (int i = 0; i < len; i++)
    {
        if(arr[i] % 2 != 0) std::cout << arr[i] << " ";
    }

    


    
    return 0;
}