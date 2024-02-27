#include <iostream>

int main()
{
    int count, min_int = 32000, max_int = -32000, first_min = 0, last_max = 0, sum = 0,temp ;
    std::cin >> count;

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >>arr[i];
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

    if (first_min > last_max)
    {
        temp = first_min;
        first_min = last_max;
        last_max = temp;
    }
    

    for (int i = first_min; i <= last_max; i++)
    {
        sum+=arr[i];
    }
    
    std::cout << sum << std::endl;

    return 0;
}