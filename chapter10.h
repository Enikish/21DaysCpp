#pragma once
#include <iostream>

namespace chapter10
{
	class Fish
	{
	protected: // 使用protected关键字，除了子类和自己其他外部结构都不能访问
		bool isFreshWaterFish;

	public:
		Fish(bool isFreshWaterFish);
		void Swim();
	};
 
	class Tuna : public Fish
	{
	public:
		Tuna();
		void Swim();
	};

	class Carp : public Fish
	{
	public:
		Carp();
		void Swim();
	};

	class Motor
	{
	public:;
		  void SwitchIgnition();
		  void PumpFuel();
		  void FirerCylinder();
		  
	};

	class Car :private Motor
	{
	public:
		void Move()
		{
			SwitchIgnition();
			PumpFuel();
			FirerCylinder();
		}
	};

}