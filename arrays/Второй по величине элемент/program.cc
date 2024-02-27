#include <iostream>

int main()
{
    int count, max_int = -32000, second_max  = -32000,index = 0;
    std::cin >> count;
    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        max_int = std::max(max_int, arr[i]);
    }

    for (int i = 0; i < count; i++)
    {
        if (second_max < arr[i] && arr[i] != max_int)
        {
            second_max = arr[i];
            index = i;
        }
        
    }
    std::cout << second_max << " " << index+1 << std::endl;
    

    
    return 0;
}