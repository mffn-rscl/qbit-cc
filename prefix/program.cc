#include <iostream>
#include <string>

int main()
{
	std::string str, solution = "";
	getline(std::cin, str);

	int i, j;
	std::cin >> i >> j;
	std::cin.ignore();
	std::cout << j - i + 2 << std::endl;
	for (int k = i-1; k < j-1; k++)
	{
		solution = solution + str[k];
		std::cout << solution << std::endl;
	}
	return 0;
} 