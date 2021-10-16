#include <iostream>
#include <ctime>
#include <vector>
#include <bitset>
#include "string/ReverseInteger.h"
#include "string/FirstUniqChar.h"
#include "string/IsPalindrome.h"
#include "string/MyAtoi.h"
#include "string/CountAndSay.h"
#include "SingleLinked.h"
#include "MyTree.h"
#include "MyArray.h"


//#include "MaxProfit.cpp"
//#include "Rotate.cpp"

using namespace std;

bool isValidSudoku(vector<vector<char>>& board)
{
    bitset<10> flag;
    for (int l = 0; l < 9; ++l)
    {
        flag.reset();
        for (int i = 0; i < 9; ++i)
        {
            //every line
            char num = board[l][i];
            if(num == '.')
            {
                continue;
            }
            num -= '0';
            if (flag[num] != 0)
            {
                return false;
            } else
            {
                flag.set(num);
            }
        }
    }
    //every colum
    for (int col = 0; col < 9; ++col)
    {
        flag.reset();
        for (int i = 0; i < 9; ++i)
        {
            char num = board[i][col];
            if(num == '.')
            {
                continue;
            }
            num -= '0';
            if (flag[num] != 0)
            {
                return false;
            } else
            {
                flag.set(num);
            }
        }
    }
    for (int j = 0; j < 9; ++j)
    {
        flag.reset();
        for (int i = 0; i < 9; ++i)
        {
            char num = board[(j % 3) * 3 + i / 3][i % 3 + (j / 3) * 3];
            if(num == '.')
            {
                continue;
            }
            num -= '0';
            if (flag[num] != 0)
            {
                return false;
            } else
            {
                flag.set(num);
            }
        }
    }
    return true;
}

void test()
{
    auto * node = new TreeNode(0);
    node->left = new TreeNode(-1);
    node->right = new TreeNode(2);
    node->right->left = new TreeNode(-2);

    // cout << "treeNode deep: " << MyTree::isValidBST(node) << endl;
    // cout << "is valid bst: " << MyTree::isValidBST(node, LONG_MAX, LONG_MIN) << endl;
    auto list = MyTree::levelOrder(node);
    for(auto &item: list)
    {
        for(auto &num: item)
        {
            cout << num << ", ";
        }
        cout << endl;
    }
}

void print(vector<vector<int>> list)
{
    for (auto &&i : list)
    {
        for (auto &&j : i)
        {
            cout << j << ", ";
        }
        cout << endl;
    }
}

int main()
{
	std::cout << "Hello, World!" << std::endl;
	clock_t startTime = clock();
//	test();
//    auto list = {-1, 0};
//    auto tree =  MyTree::sortedArrayToBST(list);
    MyArray::Test();
	clock_t endTime = clock();
	cout << "total time: " << (double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
//	cin.get();
	return 0;
}




