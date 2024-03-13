#include <iostream>
#include <vector>
int main()
{
    int n,b;
    std::cin >> n;
    std::vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }
    std::cin >> b;

    for (int i = 0; i < n; i++)
    {
        if (i != b-1)
            std::cout << arr[i] << " ";        
    }

    

    return 0;
}