#include <iostream>
#include <algorithm>
int main()
{
    int size,max_int = -32000, min_int = 32000, sum = 0;
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
        max_int = std::max(max_int, arr[i]);
        min_int = std::min(min_int, arr[i]);
        sum +=arr[i];
    }

    std::cout << sum -max_int - min_int << std::endl;
    

        
    return 0;
}