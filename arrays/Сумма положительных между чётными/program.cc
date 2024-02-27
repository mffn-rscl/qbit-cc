#include <iostream>

int main()
{
  int count, first_index = -1, last_index = -1;
  std::cin >> count;
  int arr[count];

  for (int i = 0; i < count; i++)
    std::cin >> arr[i];

  

  for (int i = 0, j = count-1; i < count; i++, j--)
  {
    if (arr[i] % 2 == 0 && first_index < 0)
      first_index = i;
    if (arr[j] % 2 == 0 && last_index < 0)
      last_index = j;
  }
  int sum = 0;

  
  for (int k = first_index; k<= last_index; k++)
  {
    if (arr[k] > 0)
      sum+=arr[k];    
  }
  std::cout << sum << std::endl;

  return 0;
}