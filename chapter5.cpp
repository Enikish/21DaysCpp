#include "chapter5.h"

void chapter5::PreAndPostfix()
{
	int num = 101;
	std::cout << "num now is:" << num << std::endl; // 101

	std::cout << "execute num++:" << num++ << std::endl; // 输出101，输出后变为102

	std::cout << "execute ++num:" << ++num << std::endl; // 直接输出103

	std::cout << "execute num--:" << num-- << std::endl; // 输出103，输出后变为102

	std::cout << "execute --num" << --num << std::endl; // 直接输出101

}

void chapter5::LogicOperate()
{
	std::cout << "Enter true or false for two operands:" << std::endl;
	bool op1 = false, op2 = false;
	std::cin >> op1;
	std::cin >> op2;

	std::cout << op1 << " AND " << op2 << " = " << (op1 && op2) << std::endl;
	std::cout << op1 << " OR " << op2 << " = " << (op1 || op2) << std::endl;
	std::cout << op1 << " XOR " << op2 << " = " << (op1 ^ op2) << std::endl; // 异或运算
}

void chapter5::LogicOperateOnInteger()
{
	std::cout << "Enter a number (0 - 255):";
	unsigned short inputNum = 0;
	std::cin >> inputNum;

	std::bitset<8> inputBits(inputNum);
	std::cout << inputNum << " in binary is " << inputBits << std::endl;

	std::bitset<8> bitwiseNOT = (~inputBits);
	std::cout << "Logical NOT ~ " << " = " << bitwiseNOT << std::endl;

	std::cout << "Logical AND, & with 00001111" << std::endl;
	std::bitset<8> bitwiseAND = (0x0F & inputNum); // 0x0F 是 000111的十六进制
	std::cout << "0001111 & " << inputBits << " = " << bitwiseAND << std::endl;

	std::cout << "Logical OR, | with 00001111 " << std::endl;
	std::bitset<8> bitwiseOR = (0x0F | inputNum);
	std::cout << "00001111 | " << inputBits << " = " << bitwiseOR << std::endl;

	std::cout << "Logical XOR, ^ 00001111 " << std::endl;
	std::bitset<8> bitwiseXOR = (0x0F ^ inputNum);
	std::cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << std::endl;
}

void chapter5::ShiftOperate()
{
	// 左移右移运算符就是将整个位想做或右移动，其中一个用途是将数据乘以或除以2
	std::cout << "Enter a number";
	int inputNum = 0;
	std::cin >> inputNum;

	int halfNum = inputNum >> 1;
	int quarterNum = inputNum >> 2;
	int doubleNum = inputNum << 1;
	int quadrupleNum = inputNum << 2;

	std::cout << "Quarter: " << quarterNum << std::endl;
	std::cout << "Half: " << halfNum << std::endl;
	std::cout << "Double: " << doubleNum << std::endl;
	std::cout << "Quadruple: " << quadrupleNum << std::endl;
}
