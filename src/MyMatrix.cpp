//
// Created by 韩腾 on 2021/10/23.
//

#include <queue>
#include <iostream>
#include "MyMatrix.h"

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
        auto iter = visited.find(i);
        if (iter != visited.end()){
            visited.erase(iter);
        }
    }
}

void MyMatrix::dijkstra(vector<vector<int>> &matrix) {
    vector<int> distance;
    int size = matrix.size();
    for (int i = 0; i < size; ++i) {
        int tmp = matrix[i][0];
        if (tmp < 0){
            tmp = INT32_MAX;
        }
        distance.push_back(tmp);
    }

    unordered_set<int> visited;
    visited.insert(0);
    int dst = 0;
    while (visited.size() != size){
        int minIndex = 0;
        int min = INT32_MAX;
        for (int i = 0; i < size; ++i) {
            if (visited.find(i) != visited.end()){
                continue;
            }
            int step = 0;
            if (dst > i){
                step = matrix[dst][i];
            } else {
                step = matrix[i][dst];
            }
            if (step > 0 && step + distance[dst] < distance[i]){
                distance[i] = step + distance[dst];
            }

            if (distance[i] < min){
                minIndex = i;
                min = distance[i];
            }
        }
        visited.insert(minIndex);
        dst = minIndex;
    }

    for (int i = 0; i < size; ++i) {
        cout << "city: " << i + 1 << ", distance: " << distance[i] << endl;
    }
}

void MyMatrix::Test() {
    auto matrix = vector<vector<int>>{
        {0, 0, 0, 0, 0},
        {50, 0, 0, 0, 0},
        {10, 5, 0, 0, 0},
        {100, 20, 50, 0, 0},
        {10, 1, -1, 10, 0}};

    MyMatrix myMatrix;
    unordered_set<int> visited;
    int max = 0;
    for (int i = 1; i < matrix.size(); ++i) {
        int min = 1000;
        visited.clear();
        myMatrix.dp(matrix, visited, i, 0, min);
        cout << "dst " << i + 1 << " shortest path: " << min << endl;
        if (min > max){
            max = min;
        }
    }

    cout << "shortest path: " << max << endl;
    dijkstra(matrix);
}