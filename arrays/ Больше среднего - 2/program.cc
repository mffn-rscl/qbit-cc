#include <iostream>

int main()
{

    int count,counter = 0, min_int = 32000, max_int = -32000;
    std::cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        min_int = std::min(min_int, arr[i]);
        max_int = std::max(max_int, arr[i]);
    }

    double sum =  (max_int + min_int)/ 2.0;

    for (int i = 0; i < count; i++)
    {
        if (arr[i] > sum)
        {
            counter++;
        }
        
    }
    std::cout << counter << std::endl;
        
    return 0;
}