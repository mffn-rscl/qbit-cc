#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	std::string str, solution = "";
	getline(std::cin, str);

	int i, j;
	std::cin >> i >> j;
	std::cin.ignore();
	std::cout << j - i + 2 << std::endl;
	
	for (int k = i; k < j; k++)
	{
		std::cout << str.substr(k, j-k) << std::endl;
	}

	return 0;
}