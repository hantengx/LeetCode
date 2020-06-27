#include <iostream>
using namespace	std;

class Animal
{
public:
	Animal()
    {
		name="Animal";
		age = 1;
	}
	//c++里面的字符串类型string比c语言里面的字符数组好用很多
	Animal(string newname, int intage):name(newname),age(intage)
	{
		//字符串赋值不需要strcpy()，直接赋值就OK
		//name=newname;
	}
	void display()
	{
		cout<<"name:"<<name;
		cout<<", age:"<<age<<endl;
	}

	static int test();

private:
	string name;
	int age;
};

int Animal::test()
{
	Animal animal;
	animal.display();

	Animal monkey("Monkey", 10);
	monkey.display();

    return	0;
}
