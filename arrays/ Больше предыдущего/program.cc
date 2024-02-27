#include <iostream>

int main()
{

    int size,counter = 0;
    std::cin >> size;
    int arr[size];
    std::cin >> arr[0];
    for (int i = 1; i < size; i++)
    {
        std::cin >> arr[i];
        if(arr[i] > arr[i-1]) 
            counter++;
    }

    std::cout << counter << std::endl;
    return 0;
    
}