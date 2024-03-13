#include <iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int count)
{
    for (int i = count-1; i >0; i--)
    {
        int smallestIndex = i;
        for (int j = i-1; j>= 0; j--)
        {
            if (arr[smallestIndex] > arr[j])
                smallestIndex = j;
            
        }
        swap(&arr[smallestIndex], &arr[i]);
    }

    
}

int main()
{
    int n,b;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::cin >> b;
    selection_sort(arr,n);
    for (int i = n-1; i>0; i--)
    {
        if (arr[i] < b && arr[i-1] >= b)
        {
            std::cout << i+1 << std::endl;
        }
        
    }
        
    

}