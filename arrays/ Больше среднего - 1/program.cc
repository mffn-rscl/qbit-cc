#include <iostream>

int main()
{

    int count,   counter = 0;
    std::cin >> count;
    double sum = 0;
    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        sum+=arr[i];
    }
    sum /=count;

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