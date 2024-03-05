#include "chapter11.h"

void chapter11::MakeFishSwim(Fish& InputFish)
{
	InputFish.Swim();
}

void chapter11::UseFishSwim()
{
	Tuna myDinner;
	Carp myLunch;

	MakeFishSwim(myDinner);
	MakeFishSwim(myLunch);
}

chapter11::Fish::Fish()
{
	std::cout << "Fish constructed " << std::endl;
}

chapter11::Fish::~Fish()
{
	std::cout << "Fish destroied " << std::endl;
}

chapter11::Tuna::Tuna()
{
	std::cout << "Tuna constructed " << std::endl;
}

chapter11::Tuna::~Tuna()
{
	std::cout << "Tuna destroied " << std::endl;
}

void chapter11::Derived::DoSomething()
{
	std::cout << "Implemented virtual function " << std::endl;
}
