#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array[4];
	char element;
	for (int i = 0; i < 4; i++)
	{

		std::cin >> element;
		array[i] = element;
	}
	std::sort(array, array+4);
	for (int i = 0; i < 4; i++)
	{
		std::cout << static_cast<char>(array[i]) << " ";
	}
    return 0;
}