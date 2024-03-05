#pragma once
#include <iostream>

namespace chapter11 {
	class Fish
	{
	public:
		virtual void Swim()
		{
			std::cout << "Fish swims! " << std::endl;
		}
		Fish();
		virtual ~Fish();
	};

	class Tuna : public Fish
	{
	public:
		Tuna();
		~Tuna();
		// override Fish::Swim
		void Swim()
		{
			std::cout << "Tuna swims! " << std::endl;
		}
	};

	class Carp : public Fish
	{
	public:;
		  void Swim() override final // ������ĺ�����ʹ��override����鸸��ĺ����Ƿ�����Ϊvirtual��ʹ��final����ֹ����
		  {
			  std::cout << "Carp swims!" << std::endl;
		  }
	};

	void MakeFishSwim(Fish& InputFish);
	void UseFishSwim();

	class AbstractBase
	{
	public:
		virtual void DoSomething() = 0; // ���麯��
	};

	class Derived : public AbstractBase
	{
	public:
		void DoSomething();
	};

	class Animal
	{
	public:
		Animal(): age(0)
		{
			std::cout << "Animal constructor" << std::endl;
		}
		int age;
	};

	class Bird: public virtual Animal
	{};

	class Mammal: public virtual Animal
	{};

	class Reptile: public virtual Animal
	{};

	class Platypus final : public Mammal, public Bird, public Reptile // ʹ����̳еķ�ʽ�����ڼ̳ж����ͬһ��������������ʱֻ����һ���������
	{
	public:
		Platypus()
		{
			std::cout << "Platypus constructor" << std::endl;
		}
	};
}