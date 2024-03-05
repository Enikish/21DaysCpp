#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
namespace chapter9 {
	class Human{
	public:
		// 当提供重载的构造函数后，默认生成的构造函数就不会生成。如果重载的一个有参的构造函数，那么该类就只有这个有参的构造函数，在创建对象的时候需要传入参数。
		Human(); // 无参的默认构造函数声明，默认构造函数是调用时可不提供参数，不是指不接受任何参数的构造函数。因此将所有的参数设有默认值的构造函数也是默认构造函数。
		Human(std::string humansName, int humansAge); // 有参构造函数的重载
		~Human();
		void IntroduceSelf();
		void Talk(std::string textToTalk);
		void SetName(std::string humansName);
		void SetAge(int humansAge);
	private:
		friend class Utility;
		int age;
		std::string name;
		std::string dateOfBirth;
		std::string placeOfBirth;
		std::string gender;
		friend void DisplayAge(const Human& person); // 友元函数能访问类的私有成员
	};
	class Utility
	{
		// 友元类可以访问类的私有成员
	public:
		static void DisplayAge(const Human& person);
	};
	
	class MyString 
	{
	private:
		char* buffer;
	public:
		MyString(const char *initString);
		MyString(const MyString& cpSource);
		MyString(MyString&& moveSource)noexcept;
		~MyString();
		int GetLength();
		const char* GetString();
	};
	class President
	{
	private:
		President() {};
		President(const President&);
		const President& operator=(const President&) {};
		std::string name;
	public:
		static President& GetInstance();
		std::string GetName();
		void SetName(std::string InputName);
	};
	class MonsterDB
	{
	private:
		~MonsterDB() {}; // 将析构函数设为private后可以阻止在栈空间声明MonsterDB对象。
	public:
		static void DestroyInstance(MonsterDB* pInstance); // 声明一个公共的静态函数来实现对象销毁，否则会造成内存泄露。
	};
	void UseMyString();
	void UseMyString(MyString str);
	void UseMonsterDB();
	union SampleUnion
	{
		int num;
		char alphabet;
	};
	struct ComplexType
	{
		enum DateType
		{
			Int,
			Char
		} Type;

		union Value
		{
			int num;
			char alphabet;
		}value;
	};

	void DisplayComplexType(const ComplexType& obj);
	void UseComplexType();
}
