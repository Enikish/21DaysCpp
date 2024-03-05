#pragma once
#include <iostream>

namespace chapter10
{
	class Fish
	{
	protected: // ʹ��protected�ؼ��֣�����������Լ������ⲿ�ṹ�����ܷ���
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