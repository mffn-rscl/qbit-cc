#include <iostream>
#include <string>
int main()
{
	std::string str;
	getline(std::cin, str);
	int length = str.size();

	
	std::cout << length<< std::endl;
}