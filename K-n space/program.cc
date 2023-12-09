#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string str;
	getline(std::cin, str);
	int n, counter = 0;
	std::cin >> n;
	std::cin.ignore();

    if(n > std::count(str.begin(), str.end(), ' '))
    {
        std::cout << 0 << std::endl;
    }
	else 
    {
    for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			counter++;
			if (counter == n)
			{
				std::cout << i + 1 << std::endl;
				break;
			}
		}
	}
    }
	return 0;
}