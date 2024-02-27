#include <iostream>

int main()
{
    int size, counter = 0;
    std::cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    for (int i = 1; i < size-1; i++)
    {
        if (arr[i-1] < arr[i] && arr[i] > arr[i+1])
            counter++;        
    }

    std::cout << counter<< std::endl;
    
        
    return 0;
}