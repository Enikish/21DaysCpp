#include "chapter8.h"

void chapter8::PointerSize()
{
	// ָ��Ĵ�Сֻ��������Ͳ���ϵͳ�йأ���ָ��������޹ء�
	int IntNum = 0, *IntPt = &IntNum;
	float FNum = 0.0, *FPt = &FNum;
	char Charac = '\0', * CharacPt = &Charac;
	std::cout << "sizeof int & int*" << " " << sizeof(IntNum) << " " << sizeof(IntPt) << std::endl;
	std::cout << "sizeof float & float*" << " " << sizeof(FNum) << " " << sizeof(FPt) << std::endl;
	std::cout << "sizeof char & char*" << " " << sizeof(Charac) << " " << sizeof(CharacPt) << std::endl;
}

void chapter8::UseNew()
{
	// ʹ��new�ؼ��ַ���һ��ָ��ָ�����뵽���ڴ��ַ
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
	// ָ���üӼ���������Խ���ƫ�ơ����磺int���͵�ָ���1�ͽ�ָ������λ��һ��int��С��λ�á������һ�����������飬��ô�����ƶ�����һ��Ԫ�ص�λ���ϡ�
	for (int counter = 0; counter < numEnteries; ++counter)
	{
		std::cout << "Enter number " << counter << ":";
		// �˴�ָ��ĵ�ַ����仯����Ϊû�н��и�ֵ
		std::cin >> *(pointsToInts + counter);
	}

	std::cout << "Displaying all numbers entered: " << std::endl;
	for (int counter = 0; counter < numEnteries; ++counter)
	{
		// �˴�ָ�������һ��λ��λ�ƣ���Ϊ��++��������������ִ�н���֮ǰ��ָ���λ�ø�ֵȻ��λ�ơ�
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
	// const�ؼ��ֵ�ʹ�÷���������
	int daysInMonth = 30;
	int* const pDaysInMonth = &daysInMonth; // ʹ�� type* const ����ʽ�������޸�ָ��ָ������ݣ����ǲ����޸�ָ��ָ��ĵĵ�ַ��
	*pDaysInMonth = 31;
	int daysInLunarMonth = 28;
	//pDaysInMonth = &daysInLunarMonth; 
}
