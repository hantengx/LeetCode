//
// Created by 韩腾 on 2021/10/23.
//

#ifndef LEETCODE_MYMATRIX_H
#define LEETCODE_MYMATRIX_H

#include <vector>
#include <unordered_set>

using namespace std;

class MyMatrix {
public:
    void dp(vector<vector<int>> &matrix, unordered_set<int> &visited, int dst, int current, int& min);
    static void dijkstra(vector<vector<int>> &matrix);
    static void Test();
//    搜索二维矩阵 II
//编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target 。该矩阵具有以下特性：
//
//每行的元素从左到右升序排列。
//每列的元素从上到下升序排列。
    bool searchMatrix(vector<vector<int>>& matrix, int target);

};


#endif //LEETCODE_MYMATRIX_H
