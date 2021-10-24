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
    void ShortestPath(vector<vector<int>> &matrix);
    void dp(vector<vector<int>> &matrix, unordered_set<int> &visited, int dst, int current, int& min);
    static void Test();
};


#endif //LEETCODE_MYMATRIX_H
