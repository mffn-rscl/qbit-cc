#include <iostream>

int main()
{
    int count, min_int = 32000, first_index = 0, last_index = 0, counter = 0;
    std::cin >> count;
    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        if (arr[i] % 2 != 0 && counter != 2)
        {
            counter++;
            (counter == 1) ? first_index = i : last_index = i;
        }
        
    }

    for (int i = first_index; i <= last_index; i++)
    {
        min_int = std::min(min_int, arr[i]);
    }
    std::cout << min_int << std::endl;
    
    return 0;
}