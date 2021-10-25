//
// Created by teng on 2021/10/25.
//

#include "MySearch.h"
#include <stack>
#include <set>
#include <queue>

void MySearch::dfs(TreeNode *root) {
    stack<TreeNode*> stack;
    set<TreeNode*> set;
    stack.push(root);
    while (!stack.empty()){
        TreeNode* node = stack.top();
        if (node->left){
            stack.push(node->left);
            continue;
        }
        if (node->right){
            stack.push(node->right);
            continue;
        }
        stack.pop();
        //TODO: 回溯
    }
}

//先序遍历，广度优先搜索
void MySearch::bfs(TreeNode *root) {
    queue<TreeNode*> queue;
    queue.push(root);
    while (!queue.empty()){
        TreeNode* node = queue.front();
        if (node->left){
            queue.push(node->left);
        }
        if (node->right){
            queue.push(node->right);
        }
        queue.pop();
    }
}