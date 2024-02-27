#include <iostream>


int main()
{
    int size, counter = 0;
    double sum = 0;
    std::cin >> size;

    int arr[size];

    

    for (int i = 1; i <= size; i++)
    {
        std::cin >> arr[i];
        if (arr[i] % 2 != 0 && i %2 ==0)
        {
            sum +=arr[i];
            counter++;
        }
    }

    std::cout << ((counter == 0) ? 0 : sum / counter)<< std::endl; 
    
    return 0;
}