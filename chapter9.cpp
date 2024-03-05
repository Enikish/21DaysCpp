#include "chapter9.h"
chapter9::Human::Human()
{
	this->age = 1;
	this->gender = "Male";
	this->placeOfBirth = "Sant Loits Hospital";
	this->name = "Mike";
	std::cout << "Constructed an instance of Human with naming Mike and gender Male";
}

chapter9::Human::Human(std::string humansName, int humansAge)
	:name(humansName), age(humansAge)
{
	std::cout << humansName << "Created" << std::endl;
}

chapter9::Human::~Human()
{
	std::cout << "Human " << this->name << " destroied";
}

void chapter9::Human::IntroduceSelf()
{
	std::cout << "My name is " << this->name << ". I am a " << this->gender << ". I was born on " << this->dateOfBirth << std::endl;
}

void chapter9::Human::Talk(std::string textToTalk)
{
	std::cout << this->name << " speaks " << textToTalk << std::endl;
}

void chapter9::Human::SetName(std::string humansName)
{
	this->name = humansName;
}

void chapter9::Human::SetAge(int humansAge)
{
	this->age = humansAge;
}


chapter9::MyString::MyString(const char* initString)
{
	if (initString != NULL)
	{
		buffer = new char[strlen(initString) + 1];
		std::strcpy(buffer, initString);
	}
	else
	{
		buffer = NULL;
	}
}

chapter9::MyString::MyString(const MyString& cpSource)
// 在调用拷贝构造函数时确保是使用深拷贝
{
	buffer = NULL;
	std::cout << "Copy constructor: copying from MyString" << std::endl;
	// 确认对象的指针和指向的内存块以及内容都被拷贝
	if (cpSource.buffer != NULL)
	{
		buffer = new char[strlen(cpSource.buffer) + 1];
		std::strcpy(buffer, cpSource.buffer);

		std::cout << "buffer points to: 0x" << std::hex;
		std::cout << (unsigned int*)buffer << std::endl;
	}
}

 chapter9::MyString::MyString(MyString&& moveSource)noexcept
{
	 buffer = NULL;
	if (moveSource.buffer != NULL)
	{
		buffer = moveSource.buffer;
		moveSource.buffer = NULL;
	}
}

chapter9::MyString::~MyString()
{
	std::cout << "Invoking destructor, cleaning up " << std::endl;
	// 如果执行了浅拷贝，那么对象的所有数据都将被复制一份，包括对象包括的指针。但是对象包含的指针指向的内存空间不会复制，即新复制出来的对象包含的指针会指向同一块内存地址。如果两个对象都执行delete就会出现错误。
	if (buffer != NULL)
	{
		delete[] buffer;
	}
}

int chapter9::MyString::GetLength()
{
	if (buffer != NULL)
	{
		return std::strlen(buffer);
	}
	else
	{
		return 0;
	}
}

const char* chapter9::MyString::GetString()
{
	if (buffer != NULL)
	{
		return buffer;
	}
	else
	{
		return nullptr;
	}
}

void chapter9::DisplayAge(const Human& person)
{
	std::cout << person.age << std::endl;
}

void chapter9::UseMyString()
{
	MyString sayHello("Hello from String Class");
	std::cout << "String buffer in sayHello is " << sayHello.GetLength();
	std::cout << " characters long " << std::endl;
	std::cout << "Buffer contains:" << sayHello.GetString() << std::endl;
}

void chapter9::UseMyString(MyString str)
{
	std::cout << "String buffer in MyString is " << str.GetString();
	std::cout << " characters long " << std::endl;
	std::cout << "buffer contains: " << str.GetString() << std::endl;
	return;
}

void chapter9::UseMonsterDB()
{
	MonsterDB* myDB = new MonsterDB();
	MonsterDB::DestroyInstance(myDB);
	return;
}

void chapter9::DisplayComplexType(const ComplexType& obj)
{
	switch (obj.Type)
	{
	case ComplexType::Int:
		std::cout << "Union contains number: " << obj.value.num << std::endl;
		break;
	case ComplexType::Char:
		std::cout << "Union contains character: " << obj.value.alphabet << std::endl;
		break;
	default:
		break;
	}
}

void chapter9::UseComplexType()
{
	SampleUnion u1, u2;
	u1.num = 2100;
	u2.alphabet = 'c';
	std::cout << "sizeof(u1) containing integer: " << sizeof(u1) << std::endl;
	std::cout << "sizeof(u2) containing character: " << sizeof(u2) << std::endl;

	ComplexType myData1, myData2;
	myData1.Type = ComplexType::Int;
	myData1.value.num = 2017;

	myData2.Type = ComplexType::Char;
	myData2.value.alphabet = 'X';

	DisplayComplexType(myData1);
	DisplayComplexType(myData2);
}


chapter9::President& chapter9::President::GetInstance()
{
	static President onlyInstance;
	return onlyInstance;
}

std::string chapter9::President::GetName()
{
	return name;
}

void chapter9::President::SetName(std::string InputName)
{
	name = InputName;
}

void chapter9::MonsterDB::DestroyInstance(MonsterDB* pInstance)
{
	delete pInstance;
}

void chapter9::Utility::DisplayAge(const Human& person)
{
	std::cout << person.age << std::endl;
}
