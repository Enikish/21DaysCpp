#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
namespace chapter9 {
	class Human{
	public:
		// ���ṩ���صĹ��캯����Ĭ�����ɵĹ��캯���Ͳ������ɡ�������ص�һ���вεĹ��캯������ô�����ֻ������вεĹ��캯�����ڴ��������ʱ����Ҫ���������
		Human(); // �޲ε�Ĭ�Ϲ��캯��������Ĭ�Ϲ��캯���ǵ���ʱ�ɲ��ṩ����������ָ�������κβ����Ĺ��캯������˽����еĲ�������Ĭ��ֵ�Ĺ��캯��Ҳ��Ĭ�Ϲ��캯����
		Human(std::string humansName, int humansAge); // �вι��캯��������
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
		friend void DisplayAge(const Human& person); // ��Ԫ�����ܷ������˽�г�Ա
	};
	class Utility
	{
		// ��Ԫ����Է������˽�г�Ա
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
		~MonsterDB() {}; // ������������Ϊprivate�������ֹ��ջ�ռ�����MonsterDB����
	public:
		static void DestroyInstance(MonsterDB* pInstance); // ����һ�������ľ�̬������ʵ�ֶ������٣����������ڴ�й¶��
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
