//
// Created by hante on 2019/6/13.
//

#include "MyTree.h"

int MyTree::CountDeep(TreeNode *root, int deep)
{
    if (!root)
    {
        return deep;
    }

    deep++;
    int leftDeep = CountDeep(root->left, deep);
    int rightDeep = CountDeep(root->right, deep);
    deep = deep > leftDeep ? deep : leftDeep;
    deep = deep > rightDeep ? deep : rightDeep;

    return deep;
}

bool MyTree::isValidBST(TreeNode *root, long max, long min)
{
    if (!root)
        return true;
    if (root->val <= min || root->val >= max)
    {
        return false;
    }

    return isValidBST(root->left, root->val, min) && isValidBST(root->right, max, root->val);
}

// 给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。
vector<vector<int>> MyTree::levelOrder(TreeNode *root)
{
    auto l = new vector<vector<int>>();
    addValue(root, l, 0);
    return *l;
}

//深度优先搜索（fds），先序遍历，
void MyTree::addValue(TreeNode *root, vector<vector<int>> *l, int level)
{
    if (root == nullptr)
    {
        return;
    }
    if (l->size() == level)
    {
        l->push_back(vector<int>());
    }
    l->at(level).push_back(root->val);
    level++;
    addValue(root->left, l, level);
    addValue(root->right, l, level);
}

//将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。
//bst的定义，左子树小于跟节点小于右子树
TreeNode * MyTree::sortedArrayToBST(const vector<int> &nums)
{
    if(nums.size() == 0)
    {
        return nullptr;
    }
    return getNode(nums, 0, nums.size());
}

TreeNode * MyTree::getNode(const vector<int> &nums, int start, int end)
{
    auto index = (start + end) / 2;
    auto node = new TreeNode(nums[index]);
    if(start < index)
    {
        node->left = getNode(nums, start, index - 1);
    }
    if(index < end)
    {
        node->right = getNode(nums, index + 1, end);
    }
    return node;
}
