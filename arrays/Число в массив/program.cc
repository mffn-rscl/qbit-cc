#include <iostream>
#include <string>
int main()
{
    std::string N;
    getline(std::cin, N);
    std::cin.clear();
    int arr[N.length()];
    for (int i = 0; i < N.length(); i++)
    {
        arr[i] = static_cast<int>(N[i]) - 48;
        std::cout << arr[i] << " ";
    }

    
    return 0;
}