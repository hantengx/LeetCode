#include <iostream>
#include <vector>
#include <deque>
#include <random>
#include <cstdlib>

using namespace std;

const int SIZE = 25;
struct MazeNode
{
    MazeNode(int posx, int posy):x(posx), y(posy){}
    int x,y;
    bool up, down, left, right;
};

//生成迷宫的三种算法
//1. 深度优先算法，找到一个节点，随机选择一个方向，获取下一个节点，重复这个过程，直到4个方向都没有节点可选，则回退一个节点再次查找，重复这个过程
//2. 每次每次随机选择一个已有的节点，随机一个方向获取新的节点
//3. 4分空间。。。

void generate1(vector<MazeNode*> * maze)
{
    deque<MazeNode*> tmp;
    auto current = (*maze)[0];
    while (current != nullptr)
    {
        int random = rand() % 4;
    }
    
    
}

void show(vector<MazeNode*> * maze)
{

}

//int main()
//{
//    srand(0);
//    vector<MazeNode*> maze;
//    for (size_t i = 0; i < SIZE; i++)
//    {
//        for (size_t j = 0; j < SIZE; j++)
//        {
//            maze.push_back(new MazeNode(i, j));
//        }
//    }
//
//    return 0;
//}