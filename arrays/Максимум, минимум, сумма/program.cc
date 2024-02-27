#include <iostream>
#include <algorithm>

int main()
{
    int count, sum = 0, min_int = 32000, max_int = -32000, first_min = 0, last_max = 0;
    std::cin >> count;

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >>arr[i];
        sum+= arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        if(min_int > arr[i])
        {
            min_int = arr[i];
            first_min = i;

        }
    }

     for (int i = count-1; i >= 0; i--)
    {
        if(max_int < arr[i])
        {
            max_int = arr[i];
            last_max= i;
            
        }
    }
    std::cout << sum << "\n" << max_int << " " << last_max+1 << "\n" << min_int << " " << first_min+1;
    return 0;
}