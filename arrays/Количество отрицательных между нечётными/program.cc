#include <iostream>

int main()
{
    int count, counter = 0, first_index, second_index;
    std::cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)std::cin >> arr[i];

    for (int i = 0; i < count; i++)
    {
        if (arr[i] % 2 != 0 && counter != 2)
        {
            counter++;
            (counter == 1) ? first_index = i : second_index = i;

        }
        
    }
    counter = 0;
    for (int i = first_index; i <= second_index; i++)
    {
        if (arr[i] < 0)
            counter++;
        
    }
    std::cout << counter << std::endl;
    

    return 0;
}