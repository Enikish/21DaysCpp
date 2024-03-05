#include "chapter8.h"

void chapter8::PointerSize()
{
	// 指针的大小只与编译器和操作系统有关，和指向的类型无关。
	int IntNum = 0, *IntPt = &IntNum;
	float FNum = 0.0, *FPt = &FNum;
	char Charac = '\0', * CharacPt = &Charac;
	std::cout << "sizeof int & int*" << " " << sizeof(IntNum) << " " << sizeof(IntPt) << std::endl;
	std::cout << "sizeof float & float*" << " " << sizeof(FNum) << " " << sizeof(FPt) << std::endl;
	std::cout << "sizeof char & char*" << " " << sizeof(Charac) << " " << sizeof(CharacPt) << std::endl;
}

void chapter8::UseNew()
{
	// 使用new关键字返回一个指针指向申请到的内存地址
	int* pointToInt = new int;
	int* pointToInts = new int[10];
	delete pointToInt;
	delete[] pointToInts;
}

void chapter8::PointerOffset()
{
	std::cout << "How many integers you with to enter?";
	int numEnteries = 0;
	std::cin >> numEnteries;

	int* pointsToInts = new int[numEnteries];
	std::cout << "Address of pointer is:" << std::hex << pointsToInts << std::endl;
	std::cout << "Allocated for " << numEnteries << " integers " << std::endl;
	// 指针用加减运算符可以进行偏移。例如：int类型的指针加1就将指针往后位移一个int大小的位置。如果是一个连续的数组，那么就是移动到下一个元素的位置上。
	for (int counter = 0; counter < numEnteries; ++counter)
	{
		std::cout << "Enter number " << counter << ":";
		// 此处指针的地址不会变化，因为没有进行赋值
		std::cin >> *(pointsToInts + counter);
	}

	std::cout << "Displaying all numbers entered: " << std::endl;
	for (int counter = 0; counter < numEnteries; ++counter)
	{
		// 此处指针会往下一个位置位移，因为有++运算符，会在语句执行结束之前将指针的位置赋值然后位移。
		std::cout << *(pointsToInts++);
	}
	std::cout << std::endl;
	std::cout << "Address of pointer is:" << std::hex << pointsToInts << std::endl;

	pointsToInts -= numEnteries;
	delete[] pointsToInts;
	return;
}

void chapter8::UseConst()
{
	// const关键字的使用方法有三种
	int daysInMonth = 30;
	int* const pDaysInMonth = &daysInMonth; // 使用 type* const 的形式，可以修改指针指向的内容，但是不能修改指针指向的的地址。
	*pDaysInMonth = 31;
	int daysInLunarMonth = 28;
	//pDaysInMonth = &daysInLunarMonth; 
}
