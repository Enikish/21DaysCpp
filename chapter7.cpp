#include "chapter7.h"

// 函数重载：名称和返回类型相同，参数不同的函数
double chapter7::Area(double radius)
{
    return Pi * radius * radius;
}

//double chapter7::Area(double radius, double height)
//{
//    return Pi * radius * radius * 2 + 2 * Pi * radius * height;
//}

void chapter7::Area(double radius, double& result)
{
    result = Pi * radius * radius;
}

auto chapter7::Area(float radius)
{
    return Pi * radius * radius;
}

double chapter7::Volume(double radius)
{
    return (4 * Pi * radius * radius * radius) / 3;
}

double chapter7::Volume(double radius, double height)
{
    return Pi * radius * radius * height;
}

void chapter7::DisplayArray(int numbers[], int length)
{
    for (int index = 0; index < length; ++index)
    {
        std::cout << numbers[index] << " ";
    }
    std::cout << std::endl;
}

void chapter7::DisplayArray(char characters[], int length)
{
    for (int index = 0; index < length; ++index)
    {
        std::cout << characters[index] << " ";
    }
    std::cout << std::endl;
}

// 下面两个函数都使用了lambda函数，lambda函数语法如下
// [optional parameters](parameter list){statements;}
void chapter7::DisplayNums(std::vector<int>& dynArray)
{
    std::for_each(dynArray.begin(), dynArray.end(), [](int Element){ std::cout << Element << " "; });
    std::cout << std::endl;
}

void chapter7::UseDisplayNums()
{
    std::vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);
    DisplayNums(myNums);
    std::cout << "Sort them in descending order " << std::endl;
    std::sort(myNums.begin(), myNums.end(), [](int Num1, int Num2) {return (Num2 < Num1); });

    DisplayNums(myNums);

}

void chapter7::Init()
{
    std::cout << "input your choice" << std::endl;
    int choice = 0;
    std::cin >> choice;
    if (choice == 1)
    {
        int Nums[] = { 24, 58, -1, 245 };
        DisplayArray(Nums, 4);
    }
    else if (choice == 2)
    {
        char Statement[] = { 'H', 'E', 'L', 'L', 'O' , '\0' };
        DisplayArray(Statement, 5);
    }
    else return;
}

double chapter7::GetPi()
{
    return 3.14;
}




