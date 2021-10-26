//
// Created by teng on 2021/10/25.
//

#include <iostream>
#include "MySearch.h"
#include <stack>
#include <set>
#include <queue>

//深度优先搜索，栈实现
vector<int> MySearch::dfs_stack(TreeNode *root) {
    vector<int> result;
    stack<TreeNode*> stack;
    set<TreeNode*> visited;
    stack.push(root);
    visited.insert(root);
    result.push_back(root->val);

    while (!stack.empty()){
        TreeNode* node = stack.top();
        if (node->left && visited.find(node->left) == visited.end()){
            stack.push(node->left);
            visited.insert(node->left);
            result.push_back(node->left->val);
            continue;
        }
        if (node->right && visited.find(node->right) == visited.end()){
            stack.push(node->right);
            visited.insert(node->right);
            result.push_back(node->right->val);
            continue;
        }
        stack.pop();
    }
    return result;
}

//深度优先搜索，递归
void MySearch::dfs(TreeNode *root, vector<int> &result) {
    result.push_back(root->val);

    if (root->left){
        dfs(root->left, result);
    }
    if (root->right){
        dfs(root->right, result);
    }
}

//先序遍历，广度优先搜索
vector<int> MySearch::bfs(TreeNode *root) {
    vector<int> result;
    queue<TreeNode*> queue;
    queue.push(root);
    result.push_back(root->val);
    while (!queue.empty()){
        TreeNode* node = queue.front();
        queue.pop();

        if (node->left){
            queue.push(node->left);
            result.push_back(node->left->val);
        }
        if (node->right){
            queue.push(node->right);
            result.push_back(node->right->val);
        }
    }

    return result;
}


void MySearch::test() {
    auto * node = new TreeNode(0);
    node->left = new TreeNode(-1);
    node->left->right = new TreeNode(-3);
    node->right = new TreeNode(2);
    node->right->left = new TreeNode(-2);
    node->right->right = new TreeNode(-4);

    auto list = MySearch::dfs_stack(node);
    for (int i = 0; i < list.size(); ++i) {
        cout << list[i] << " -> ";
    }
    cout << endl;

    vector<int> result;
    MySearch::dfs(node, result);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " -> ";
    }
    cout << endl;

    list = MySearch::bfs(node);
    for (int i = 0; i < list.size(); ++i) {
        cout << list[i] << " -> ";
    }
    cout << endl;
}