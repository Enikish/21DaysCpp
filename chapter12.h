#pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <memory>

namespace chapter12
{
	/*
		单目运算符：只对一个操作数进行操作。典型的定义如下：
		return_type oprator operator_type ([parameter_type])
		{
			// do something
		}
		可重载的单目运算符包括:
		++, --, *. ->, !, &, ~, +, -
	*/

	/*
		双目运算符：对两个操作数进行操作的运算符。以全局函数或静态成员函数的方式实现双目运算符的定义如下：
		return_type operator_type (parameter1, parameter2);
		以类成员的方式实现的双目运算符的定义如下：
		return_type operator_type (parameter1, parameter2);
		以类成员的方式实现的双目运算符只接受一个参数，其原因是第二个参数通常是从类属性获得的。
		可重载的双目运算符包括:
		, !=, %, %=, &, &&, &=, *, *=, +, +=, -, -=, ->*, /, /=, <, <<, <<=, <=, =, ==, >, >=, >>, >>=, ^, ^=, |, |=, ||, []
	*/
	class Date
	{
	private:
		int day, month, year;
		std::string dateInString;
	public:
		Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear){}

		Date& operator ++();

		Date& operator --();

		Date operator ++(int);

		Date operator --(int);

		Date operator + (int dayToAdd);

		Date operator -(int dayToSub);

		operator const char*();

		void DisplayDate();
	};

	void UseDate();
	void UseUnique();

	class Sample
	{
	private:
		char* ptrResource;
	public:;
		  Sample(Sample&& moveSource); // 移动构造函数
		  Sample& operator= (Sample&& moveSource); // 移动赋值运算符
		  Sample();
		  Sample(const Sample& copySample); // 拷贝构造
		  Sample& operator= (const Sample& copySample); // 拷贝复制运算符
		  operator const char* (); // 类型转换运算符，在使用const char*的地方可以自动将Sample类转化为const char*类型
		  Sample operator + (const Sample& addThis);
		  int GetLength();
	};
}