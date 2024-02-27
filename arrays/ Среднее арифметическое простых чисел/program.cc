#include <iostream>
#include <cmath>
#include <iomanip>

bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n /2; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
   return true; 
}


int main()
{
    int count, counter = 0;
    double sum = 0;
    std::cin >> count;

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        if(isPrime(abs(arr[i])))
        {
            counter++;
            sum += arr[i];
        }
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(3)<<  ((counter != 0) ? (sum / counter) : 0) << std::endl;
    
    return 0;
}