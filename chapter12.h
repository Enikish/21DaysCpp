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
		��Ŀ�������ֻ��һ�����������в��������͵Ķ������£�
		return_type oprator operator_type ([parameter_type])
		{
			// do something
		}
		�����صĵ�Ŀ���������:
		++, --, *. ->, !, &, ~, +, -
	*/

	/*
		˫Ŀ����������������������в��������������ȫ�ֺ�����̬��Ա�����ķ�ʽʵ��˫Ŀ������Ķ������£�
		return_type operator_type (parameter1, parameter2);
		�����Ա�ķ�ʽʵ�ֵ�˫Ŀ������Ķ������£�
		return_type operator_type (parameter1, parameter2);
		�����Ա�ķ�ʽʵ�ֵ�˫Ŀ�����ֻ����һ����������ԭ���ǵڶ�������ͨ���Ǵ������Ի�õġ�
		�����ص�˫Ŀ���������:
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
		  Sample(Sample&& moveSource); // �ƶ����캯��
		  Sample& operator= (Sample&& moveSource); // �ƶ���ֵ�����
		  Sample();
		  Sample(const Sample& copySample); // ��������
		  Sample& operator= (const Sample& copySample); // �������������
		  operator const char* (); // ����ת�����������ʹ��const char*�ĵط������Զ���Sample��ת��Ϊconst char*����
		  Sample operator + (const Sample& addThis);
		  int GetLength();
	};
}