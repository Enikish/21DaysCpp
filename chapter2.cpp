#include <iostream>

int DemoCinCout()
{
	int inputNumber;
	
	std::cout << "Enter an integer:";

	std::cin >> inputNumber;

	std::cout << "Enter your name:";

	std::string inputName;

	std::cin >> inputName;

	std::cout << inputName << " entered " << inputNumber << std::endl;

	return 0;
}