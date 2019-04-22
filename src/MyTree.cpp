#include<iostream>
#include<limits>

using namespace std;

//  Definition for a binary tree node.
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
 
class MyTree 
{
public:
    static int CountDeep(TreeNode* root, int deep)
    {
        if(!root) return deep;

        deep++;
        int leftDeep = CountDeep(root->left, deep);
        int rightDeep = CountDeep(root->right, deep);
        deep = deep > leftDeep ? deep : leftDeep;
        deep = deep > rightDeep ? deep : rightDeep;
        
        return deep;
    }

    //判断二叉搜索树，边界值的关系，使用long
    //左子树的值都小于根节点小于所有右子树的值
    static bool isValidBST(TreeNode* root, long max, long min) 
    {
        if (!root) return true;
        if (root->val <= min || root->val >= max)
        {
            return false;
        }
        
        return isValidBST(root->left, root->val, min) && isValidBST(root->right, max, root->val);
    }
};

int main(int argc, char const *argv[])
{
    TreeNode * node = new TreeNode(0);
    node->left = new TreeNode(-1);
    node->right = new TreeNode(2);
    node->right->left = new TreeNode(2);

    // cout << "treeNode deep: " << MyTree::isValidBST(node) << endl;
    cout << "is valid bst: " << MyTree::isValidBST(node, LONG_MAX, LONG_MIN) << endl;
}