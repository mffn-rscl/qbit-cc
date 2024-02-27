#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	std::string string;
	getline(std::cin, string);

	int size = string.size();
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (static_cast<int>(string[i]) <= 59 && static_cast<int>(string[i]) >= 33)
		{
			counter++;
		}
	}

	std::cout << counter << std::endl;

}