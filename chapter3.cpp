#include "chapter3.h"

typedef int M_INTEGER;

int InitNumberDemo()
{
    int largeNum = 5000000;
    //short shortNum{ largeNum }; // ʹ�ô��﷨��������ͨ������ ,��Ϊʹ��intֵ��short���ͽ��г�ʼ�����ᵼ��ת������
    int anotherNum{ largeNum };

    auto coinFlippedHeads = true; // ʹ��auto�ؼ����Զ��ƶ�����
    auto largeNumber = 2500000000;

    M_INTEGER num = 0;

    std::string str = "'str1'";

    std::cout << typeid(str).name() << str << std::endl;

    return 0;
}
