//
// Created by hante on 2019/6/13.
//

#ifndef _MYTREE_H_
#define _MYTREE_H_

#include<vector>

using namespace std;

//  Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
        : val(x), left(nullptr), right(nullptr) {}
};

class MyTree
{
public:
    static int CountDeep(TreeNode *root, int deep);
    //判断二叉搜索树，边界值的关系，使用long
    //左子树的值都小于根节点小于所有右子树的值
    static bool isValidBST(TreeNode *root, long max, long min);
    // 给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。
    static vector<vector<int>> levelOrder(TreeNode *root);
    //深度优先搜索（fds），先序遍历，
    static void addValue(TreeNode *root, vector<vector<int>> *l, int level);
    //将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。
    static TreeNode * sortedArrayToBST(const vector<int> &nums);

private:
    static TreeNode * getNode(const vector<int> & nums, int start, int end);
};

#endif //_MYTREE_H_
