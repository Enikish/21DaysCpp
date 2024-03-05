#include "chapter4.h"

namespace chapter4 {
	enum Chess
	{
		Empty = 0,
		Rook,
		Bishop
	};

	void VectorDemo()
	{
		std::vector<int> dynArray(3);

		dynArray[0] = 365;
		dynArray[1] = -421;
		dynArray[2] = 789;

		std::cout << "Number of integers is array:" << dynArray.size() << std::endl;

		int newValue = 0;
		std::cin >> newValue;
		dynArray.push_back(newValue);

		std::cout << "Number of integers in array:" << dynArray.size() << std::endl;
		std::cout << "Last element in array:";
		std::cout << dynArray[dynArray.size() - 1] << std::endl;

	}

	void C_Style_String()
	{
		char sayHello[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0' };
		std::cout << "sizeof sayHello" << sayHello << std::endl;
		std::cout << "replace sayHello[5] with '\\0'" << std::endl;
		sayHello[5] = '\0';
		std::cout << sayHello << " sizeof sayHello " << sizeof(sayHello) << std::endl;

		std::cout << "output sizeof \"Hello\" " << sizeof("Hello") << std::endl; // 此处再末尾自动添加上一个'\0'
	}
	void using_string()
	{
		std::string greetString("Hello std::string!");
		std::cout << greetString << std::endl;

		std::cout << "Enter a line of text: " << std::endl;
		std::string firstLine;
		std::getline(std::cin, firstLine);
		
		std::cout << "Enter another" << std::endl;
		std::string secondLine;
		std::getline(std::cin, secondLine);

		std::cout << "Result of concatenation:" << std::endl;
		std::string concatString = firstLine + secondLine;
		std::cout << concatString << std::endl;

		std::cout << "Copy of concatenated string:" << std::endl;
		std::string aCopy;
		aCopy = concatString;
		std::cout << aCopy << std::endl;

		std::cout << "Length of concat string:" << concatString.length() << std::endl;
	}
}

