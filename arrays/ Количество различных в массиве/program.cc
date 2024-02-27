#include <iostream>

bool Unique_nums(int arr[], int target)
{
  
  for (int i = target-1; i >=0; i--)
  {
    if (arr[target] == arr[i])
    {
        return false;
    }
    
  }
  return true;
}
int main()
{
  int count, solution = 1;
  std::cin >> count;
  int arr[count];
  for (int i = 0; i < count; i++)std::cin >> arr[i];

  for (int i = 1; i < count; i++)
  {
     if (Unique_nums(arr, i))
    {
      solution++;
    }
    
  }
  std::cout << solution << std::endl;
  
  return 0;
}