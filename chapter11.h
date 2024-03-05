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
		  void Swim() override final // 在子类的函数中使用override来检查父类的函数是否声明为virtual和使用final来禁止重载
		  {
			  std::cout << "Carp swims!" << std::endl;
		  }
	};

	void MakeFishSwim(Fish& InputFish);
	void UseFishSwim();

	class AbstractBase
	{
	public:
		virtual void DoSomething() = 0; // 纯虚函数
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

	class Platypus final : public Mammal, public Bird, public Reptile // 使用虚继承的方式可以在继承多个由同一个基类衍生的类时只创建一个基类对象
	{
	public:
		Platypus()
		{
			std::cout << "Platypus constructor" << std::endl;
		}
	};
}