    #include <iostream>

int main()
{

    int size,counter = 0;
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
        if(arr[i] > 0) 
            counter++;
    }

    std::cout << counter << std::endl;
    return 0;
    
}