#pragma once
#include <string>
#include <iostream>
namespace chapter14
{
	/*
	ģ�庯������
	template<typename T1, typename T2 = T1>
	bool TemplateFunction(const T1& param1, const T2& param2);

	ģ��������
	template<typename T1, typename T2 = T1>
	class MyTemplate
	{
	private:
		T1 member1;
		T2 member2;
	public:
		T1 GetObj1() { return T1; }
	};
	*/

	template<typename objType>
	const objType& GetMax(const objType& value1, const objType& value2);

	template<typename T>
	class HoldVarTypeT
	{
	private:
		T value;
	public:
		void SetValue(const T& newValue);
		T& GetValue();
	};
	template<typename T>
	inline void HoldVarTypeT<T>::SetValue(const T& newValue)
	{
		value = newValue;
	}
	template<typename T>
	inline T& HoldVarTypeT<T>::GetValue()
	{
		// TODO: �ڴ˴����� return ���
		return value;
	}

	// Ĭ�ϲ�����ָ��ģ�������Ĭ������Ϊint
	//template<typename T1 = int, typename T2 = int>
	//class HoldsPair{};

	template<typename T1 = int, typename T2 = double>
	class HoldsPair
	{
	private:
		T1 value1;
		T2 value2;
	public:
		HoldsPair(const T1& val1, const T2& val2)
			: value1(val1), value2(val2){}

		const T1& GetFirstValue() const;
		const T2& GetSecondValue() const;
	};

	// ���ģ���������ģ����ľ��廯�汾��������HoldsPair<int, int>���е���ʱʹ�õİ汾
	template<> class HoldsPair<int, int>
	{
	private:
		int value1;
		int value2;
		std::string strFun;
	public:
		HoldsPair(const int& val1, const int& val2)
			: value1(val1), value2(val2) {}
		
		const int& GetFirstValue() const
		{
			std::cout << "Returning first integer" << value1 << std::endl;
			return value1;
		}

		const int& GetSecondValue() const
		{
			std::cout << "Returning second integer" << value2 << std::endl;
			return value2;
		}
	};

	template<typename T>
	class TestStatic
	{
	public:
		static int staticVal;
	};

	template<typename T> int TestStatic<T>::staticVal = 2012;
	void UseTemplateTest();
}
