#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

namespace chapter7 {
	const double Pi = 3.14159625;
	double Area(double radius);
	// 这个地方两个Area，一个用的double，一个用的double的引用。但是只能用一个，因为在调用时的格式时相同的，会让编译器混乱。
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
	// inline 关键字使函数在调用时直接展开函数，而不需要将现场保存后跳到函数所在内存地址。只有在函数逻辑简单，需要降低开销时使用，大量使用inline会导致代码急剧膨胀。
	inline double GetPi();
}
