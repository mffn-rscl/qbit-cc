#include <iostream>

int main()
{
    int count,counter = 1;
    std::cin >> count;

    int arr[count];

    for (int i = 0; i < count; i++)std::cin >> arr[i];
    
    for (int i = 1; i < count; i++)
    {
        if (arr[i] != arr[i-1])
        {
            counter++;
        }
        
    }
    std::cout << counter << std::endl;
    return 0;
}