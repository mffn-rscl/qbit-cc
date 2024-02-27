#include <iostream>

int main()
{

    int size;
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
        if(i % 2 == 0) 
         std::cout << arr[i] << " ";
    }
    return 0;
    
}