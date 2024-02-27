#include <iostream>

int main()
{
    int count, max_int = -32000, min_int = 32000,min_index = 0, max_index =0, temp;
    std::cin >> count;
    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        if (max_int < arr[i])
        {
            max_int = arr[i];
            max_index = i;
        }
        if (min_int > arr[i])
        {
            min_int = arr[i];
            min_index = i;
        } 
    }

    if(max_index < min_index)
    {
        temp = max_index;
        max_index = min_index;
        min_index = temp;
    }

    int counter = 0;
    for (int i = min_index; i <= max_index; i++)
    {
        if (arr[i] == 0)
            counter++;        
    }
    std::cout << counter << std::endl;
    
    return 0;
}