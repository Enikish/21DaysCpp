#include "chapter3.h"

typedef int M_INTEGER;

int InitNumberDemo()
{
    int largeNum = 5000000;
    //short shortNum{ largeNum }; // 使用此语法该条不能通过编译 ,因为使用int值对short类型进行初始化，会导致转换错误。
    int anotherNum{ largeNum };

    auto coinFlippedHeads = true; // 使用auto关键字自动推断类型
    auto largeNumber = 2500000000;

    M_INTEGER num = 0;

    std::string str = "'str1'";

    std::cout << typeid(str).name() << str << std::endl;

    return 0;
}
