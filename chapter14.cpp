#include"chapter14.h"


template<typename objType>
const objType& chapter14::GetMax(const objType& value1, const objType& value2)
{
	return value1 > value2 ? value1 : value2;
}

void chapter14::UseTemplateTest()
{
	TestStatic<int> intInstance;
	std::cout << "stasticVal origin val is " << intInstance.staticVal << std::endl;
	std::cout << "Setting staticVal for intInstance to 2011" << std::endl;
	intInstance.staticVal = 2011;
	TestStatic<int> secondIntInstance;

	TestStatic<double> dbInstance;
	std::cout << "Setting staticVal for Double_2 2 1011 " << std::endl;
	dbInstance.staticVal = 1011;
	TestStatic<int> secondDoubleInstance;
	
	std::cout << "secondIntInstance.staticVal = " << secondIntInstance.staticVal << std::endl;
	std::cout << "secondDoubleInstance.staticVal = " << secondDoubleInstance.staticVal << std::endl;
}
