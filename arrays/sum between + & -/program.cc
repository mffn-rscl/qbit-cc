#include <iostream>

int main()
{
    int count, pos_index = -1, neg_index = -1, sum = 0,temp;
    bool pos = false, neg = false;
    std::cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
        if (arr[i] < 0 && !neg)
        {
            neg_index = i;
            neg = true;
        }
       else if (arr[i] > 0 && !pos)
        {
            pos_index = i;
            pos = true;
        }
        
    }
    
    if (pos_index == -1 || neg_index == -1)
    {
        for (int i = 0; i < count; i++)
        {
            sum+=arr[i];
        }
    }
    else 
    {
        temp = neg_index;
        neg_index = std::min(neg_index, pos_index);
        pos_index = std::max(pos_index, temp);

        for (int i = neg_index; i <= pos_index; i++)
        {
            sum+=arr[i];
        }
                
    }
    std::cout << sum << std::endl;
}