#include <iostream>
int main()
{
  int arr[10], j, k;
  for (int i = 0; i < 10; i++)std::cin >> arr[i];
  std::cin >> j >> k;

  (k  > 10 + j-1 || k < j) ? std::cout << "Error" : std::cout << arr[k-j] << std::endl; 



  

  return 0;
}