#include <iostream>

int first_smallest(int *arr, int count)
{
    int target = 0, min_int = 32000;

    for (int i = 0; i < count; i++)
    {
        if (min_int > arr[i])
        {
            min_int = arr[i];
            target = i;
        }
    }
    return target;  

}


int last_biggest(int *arr, int count)
{
    int target = 0, max_int = -32000;

    for (int i = count-1; i > -1; i--)
    {
        if (max_int < arr[i])
        {
            max_int = arr[i];
            target = i;
        }
    }
    return target;  
}

int main()
{
    int count;
    std::cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
        std::cin >> arr[i];

    int counter = 0;
    int max = std::max(first_smallest(arr, count), last_biggest(arr,count));
    int min = std::min(first_smallest(arr, count), last_biggest(arr,count));

    for (int i = min; i  <= max; i++)
    {
        if (arr[i] < 0)
            counter++;
    }
    
    std::cout << counter << std::endl;
    
    return 0;
}