//
// Created by teng on 2021/10/25.
//

#ifndef LEETCODE_MYSEARCH_H
#define LEETCODE_MYSEARCH_H

#include "MyTree.h"

class MySearch {
public:
    static vector<int> dfs_stack(TreeNode* root);
    static void dfs(TreeNode* root, vector<int> &result);
    static vector<int> bfs(TreeNode* root);
    static void test();
};


#endif //LEETCODE_MYSEARCH_H
