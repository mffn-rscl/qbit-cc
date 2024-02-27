#include <iostream>

int main()
{
  int count, first_index = -1, min_int = 32000;
  std::cin >> count;
  int arr[count], last_index = count-1, sum = 0;

  for (int i = 0; i < count; i++)
  {
    std::cin >> arr[i];
    if (arr[i] % 2 == 0 && first_index < 0)
      first_index = i;
    if (min_int > arr[i])
    {
      min_int = arr[i];
      last_index = i;
    }
  }
  if (first_index > last_index)
  {
    std::swap(first_index, last_index);
  }

  
  for (int i = first_index; i <= last_index; i++)
    sum += arr[i];
  

  std::cout << sum << std::endl;
  return 0;

}