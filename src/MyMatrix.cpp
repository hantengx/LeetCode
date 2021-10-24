//
// Created by 韩腾 on 2021/10/23.
//

#include <queue>
#include <iostream>
#include "MyMatrix.h"

void MyMatrix::ShortestPath(vector<vector<int>> &matrix) {
    vector<int> distance;
    int size = matrix.size();
    for (int i = 1; i < size; ++i) {
        distance[i] = matrix[i][0];
        auto tmp = distance[i];
        queue<int> queue;
        queue.push(i);
        while (tmp < distance[i] && tmp > 0){
            auto dst = queue.front();
            for (int j = i + 1; j < size; ++j) {
                if (matrix[j][dst] < tmp){
                    queue.push(j);
                    tmp-= matrix[j][i];
                }
            }
        }
    }
}

void MyMatrix::dp(vector<vector<int>> &matrix, unordered_set<int> &visited, int dst, int current, int& min) {
    if (dst == 0){
        min = current;
        return;
    }

    visited.insert(dst);
    for (int i = 0; i < matrix.size(); ++i) {
        if (visited.find(i) != visited.end()) {
            continue;
        }

        int step = 0;
        if (dst > i){
            step = matrix[dst][i];
        } else {
            step = matrix[i][dst];
        }
        if (step <= 0 || step + current >= min){
            continue;
        }
        dp(matrix, visited, i, current + step, min);
        cout << "dst " << dst << " shortest path: " << min << endl;
    }
}

void MyMatrix::Test() {
    auto matrix = vector<vector<int>>{
        {0, 0, 0, 0, 0},
        {50, 0, 0, 0, 0},
        {30, 5, 0, 0, 0},
        {100, 20, 50, 0, 0},
        {10, -1, -1, 10, 0}};

    MyMatrix myMatrix;
    unordered_set<int> visited;
    int max = 0;
    for (int i = 1; i < matrix.size(); ++i) {
        int min = 1000;
        visited.clear();
        myMatrix.dp(matrix, visited, i, 0, min);
        if (min > max){
            max = min;
        }
    }

    cout << "shortest path: " << max << endl;
}