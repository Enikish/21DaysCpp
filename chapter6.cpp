#include "chapter6.h"

void chapter6::ChoiceOperate()
{
	std::cout << "Enter two integers: " << std::endl;
	int num1 = 0, num2 = 0;
	std::cin >> num1;
	std::cin >> num2;

	std::cout << "Enter \'m\' to multiply, anything else to add: ";
	char userSelection = '\0';
	std::cin >> userSelection;

	int result = 0;
	if (userSelection == 'm')
	{
		result = num1 * num2;
	}
	else
	{
		result = num1 + num2;
	}

	std::cout << "result is: " << result << std::endl;
	
}
