#include "chapter12.h"

chapter12::Date& chapter12::Date::operator++()
{
    // TODO: 在此处插入 return 语句
    // 前缀递增运算符
    ++day;
    return *this;
}

chapter12::Date& chapter12::Date::operator--()
{
    // TODO: 在此处插入 return 语句
    --day;
    return *this;
}

chapter12::Date chapter12::Date::operator++(int)
{
    // TODO: 在此处插入 return 语句
    // 后缀递增运算符
    Date copy(month, day, year);
    ++day;
    return copy;
}

chapter12::Date chapter12::Date::operator--(int)
{

    Date copy(month, day, year);
    --day;
    return copy;
}

chapter12::Date chapter12::Date::operator+(int dayToAdd)
{
    Date newDate(month, day + dayToAdd, year);
    return newDate;
}

chapter12::Date chapter12::Date::operator-(int dayToSub)
{
    return Date(month, day - dayToSub, year);
}

chapter12::Date::operator const char* ()
{
    std::ostringstream formattedDate;
    formattedDate << month << " / " << day << " / " << year;
    
    dateInString = formattedDate.str();
    return dateInString.c_str();
}

void chapter12::Date::DisplayDate()
{
    std::cout << month << " / " << day << " / " << year << std::endl;
}

void chapter12::UseDate()
{
    Date holiday(12, 25, 2016);

    std::cout << "The date object is initialized to: ";
    holiday.DisplayDate();

    ++holiday;
    std::cout << "Date after prefix-increment is: ";
    holiday.DisplayDate();

    --holiday;
    std::cout << "Date after a prefix-decremennt is: ";
    holiday.DisplayDate();

    std::cout << "Holiday is on " << holiday << std::endl;
}

void chapter12::UseUnique()
{
    std::unique_ptr<int> smartIntPtr(new int);
    *smartIntPtr = 42;

    std::cout << "Innterger value is: " << *smartIntPtr << std::endl;

    std::unique_ptr<Date> smartHoliday(new Date(12, 25, 2016));
    std::cout << "The new instance of date contains: ";
    smartHoliday->DisplayDate();
}

chapter12::Sample::Sample(Sample&& moveSource)
{
    ptrResource = moveSource.ptrResource;
    moveSource.ptrResource = NULL;
}

chapter12::Sample& chapter12::Sample::operator=(Sample&& moveSource)
{
    // TODO: 在此处插入 return 语句
    if (this != &moveSource)
    {
        delete[] this->ptrResource;
        ptrResource = moveSource.ptrResource;
        moveSource.ptrResource = NULL;
    }
    return *this;
}

chapter12::Sample::Sample()
{
    ptrResource = NULL;
}

chapter12::Sample::Sample(const Sample& copySample)
{
    if (ptrResource != NULL)
    {
        ptrResource = new char[strlen(copySample.ptrResource) + 1];
        strcpy(ptrResource, copySample.ptrResource);
    }
    else
    {
        ptrResource = NULL;
    }
}

chapter12::Sample& chapter12::Sample::operator=(const Sample& copySample)
{
    // TODO: 在此处插入 return 语句
    if ((this != &copySample) && (copySample.ptrResource != NULL))
    {
        if (ptrResource != NULL)
        {
            delete[] ptrResource;
        }
        ptrResource = new char[strlen(copySample.ptrResource) + 1];
        strcpy(ptrResource, copySample.ptrResource);
    }
    return *this;
}

chapter12::Sample::operator const char* ()
{
    return ptrResource;
}

chapter12::Sample chapter12::Sample::operator+(const Sample& addThis)
{
    Sample newStr;

    if (addThis.ptrResource != NULL)
    {
        newStr.ptrResource = new char[GetLength() + strlen(addThis.ptrResource) + 1];
        strcpy(newStr.ptrResource, ptrResource);
        strcat(newStr.ptrResource, addThis.ptrResource);
    }
    return newStr;
}

int chapter12::Sample::GetLength()
{
    return strlen(ptrResource);
}

