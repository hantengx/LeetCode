//
// Created by 韩腾 on 2021/11/21.
//

#ifndef LEETCODE_SORTANDSEARCH_H
#define LEETCODE_SORTANDSEARCH_H

#include <vector>
using namespace std;

class SortAndSearch {
public:
    //合并两个有序数组
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
//    第一个错误的版本
    int firstBadVersion(int n);

private:
    bool isBadVersion(int version);

};


#endif //LEETCODE_SORTANDSEARCH_H
