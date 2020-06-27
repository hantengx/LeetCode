#include <iostream>
using namespace std;

//声明一个Huamn类型

class Human
{
private:
    int weight;
    int height;
public:
    Human();
    Human(int x, int y);
    ~Human();

    void display();
    void setNum(int x, int y);
    static int test();
};

Human::Human()
{
    weight = 80;
    height = 178;
}

Human::Human(int x, int y = 0):weight(x), height(y)
{
    // weight=x;
    // height=y;
}

Human::~Human()
{
}

void Human::display()
{
    cout << "high: " << height << endl;
    cout << "weight: " << weight << endl;
}

void Human::setNum(int x, int y)
{
    weight = x;
    height = y;
}

int Human::test()
{
    Human zhangsan;
    Human lisi(50, 165);

    zhangsan.display();
    lisi.display();
    return 0;
}
