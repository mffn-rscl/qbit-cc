#include <iostream>
#include <cmath>
int main()
{
    int arr[10];
    long long solution = 0, temp;

   for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        solution += arr[9-i] * pow(10,i);
        
    }
    
    std::cout << solution+42 << std::endl;
    
    return 0;
}