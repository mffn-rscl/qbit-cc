#include <iostream>

int main()
{
    int count, min_int = 32000, second_min  = 32000,index = 0;
    std::cin >> count;
    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        min_int = std::min(min_int, arr[i]);
    }

    for (int i = 0; i < count; i++)
    {
        if (second_min > arr[i] && arr[i] != min_int)
        {
            second_min = arr[i];
            index = i;
        }
        
    }
    std::cout << second_min << " " << index+1 << std::endl;
    

    
    return 0;
}