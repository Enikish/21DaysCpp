#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

namespace chapter7 {
	const double Pi = 3.14159625;
	double Area(double radius);
	// ����ط�����Area��һ���õ�double��һ���õ�double�����á�����ֻ����һ������Ϊ�ڵ���ʱ�ĸ�ʽʱ��ͬ�ģ����ñ��������ҡ�
	//double Area(double radius, double height);
	void Area(double radius, double& result);
	auto Area(float radius);
	double Volume(double radius);
	double Volume(double radius, double height);

	void DisplayArray(int numbers[], int length);
	void DisplayArray(char characters[], int length);
	void DisplayNums(std::vector<int>& dynArray);
	void UseDisplayNums();

	void Init();
	// inline �ؼ���ʹ�����ڵ���ʱֱ��չ��������������Ҫ���ֳ�������������������ڴ��ַ��ֻ���ں����߼��򵥣���Ҫ���Ϳ���ʱʹ�ã�����ʹ��inline�ᵼ�´��뼱�����͡�
	inline double GetPi();
}
