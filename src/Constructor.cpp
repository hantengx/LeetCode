#include <iostream>
using namespace	std;

class Animal
{
public:
	Animal()
    {
		name="Animal";
	}
	//c++里面的字符串类型string比c语言里面的字符数组好用很多
	Animal(string newname):name(newname){
		//字符串赋值不需要strcpy()，直接赋值就OK
		//name=newname;
	}
	void disp()
	{
		cout<<"name:"<<name<<endl;
	}

private:
	string name;
};

int main(int argc, char const *argv[])
{
	Animal animal;
	animal.disp();

	Animal monkey("Monkey");
	monkey.disp();

    return	0;
}
