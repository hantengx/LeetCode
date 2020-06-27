#include<iostream>
#include<limits>
#include<vector>

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

    // 给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。
	static vector<vector<int>> levelOrder(TreeNode* root)
	{
		auto l = new vector<vector<int>>();
		addValue(root, l, 0);
		return *l;
	}

	//深度优先搜索（fds），先序遍历，
	static void addValue(TreeNode* root, vector<vector<int>>* l, int level)
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
    static TreeNode* sortedArrayToBST(const vector<int>& nums)
    {
        if(nums.size() == 0)
        {
            return nullptr;
        }
        return SetNode(nums, 0, nums.size() - 1);
    }

    static TreeNode* SetNode(const vector<int>& nums, int startIndex, int endIndex)
    {
        int midIndex = (startIndex + endIndex) / 2;
        auto node = new TreeNode(nums[midIndex]);
        if (startIndex < midIndex)
        {
            node -> left = SetNode(nums, startIndex, midIndex - 1);
        }
        if (midIndex < endIndex)
        {
            node -> right = SetNode(nums, midIndex + 1, endIndex);
        }
        return node;
    }
};

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

int test(int argc, char const *argv[])
{
    // TreeNode * node = new TreeNode(0);
    // node->left = new TreeNode(-1);
    // node->right = new TreeNode(2);
    // node->right->left = new TreeNode(2);
    // node->right->right = new TreeNode(-2);

    // cout << "treeNode deep: " << MyTree::isValidBST(node) << endl;
    // cout << "is valid bst: " << MyTree::isValidBST(node, LONG_MAX, LONG_MIN) << endl;
    // auto list = MyTree::levelOrder(node);
    // print(list);
//    auto list = {-10,-3,0,5,9};
//    auto root = MyTree::sortedArrayToBST(list);
    
    return 0;
}
