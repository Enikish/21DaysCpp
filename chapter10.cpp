#include "chapter10.h"

chapter10::Fish::Fish(bool isFreshWaterFish): isFreshWaterFish(isFreshWaterFish)
{}

void chapter10::Fish::Swim()
{
	if (isFreshWaterFish)
	{
		std::cout << "Swims in lake" << std::endl;
	}
	else
	{
		std::cout << "Swims in sea" << std::endl;
	}
}

chapter10::Tuna::Tuna():Fish(false)
{
}

chapter10::Carp::Carp():Fish(true)
{
}

void chapter10::Carp::Swim()
{
	std::cout << "Carp swims real slow" << std::endl;
	Fish::Swim(); // 用作用域解析运算符调用基类函数
}

void chapter10::Tuna::Swim()
{
	std::cout << "Tuna swims real fast " << std::endl;
}

void chapter10::Motor::SwitchIgnition()
{
	std::cout << "Ignition ON" << std::endl;
}

void chapter10::Motor::PumpFuel()
{
	std::cout << "Fuel in cylinnders " << std::endl;
}

void chapter10::Motor::FirerCylinder()
{
	std::cout << "Vroooom" << std::endl;
}
