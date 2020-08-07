#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello!, what is your name?" << std::endl;
	std::string name;
	getline(std::cin, name);
	std::cout << "Nice to meet you " << name << std::endl;

}

