//
// Created by 韩腾 on 2021/10/16.
//

#ifndef LEETCODE_MYARRAY_H
#define LEETCODE_MYARRAY_H

#include <vector>
using namespace std;

class MyArray {
public:
//    给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
//    不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
    int removeDuplicates(vector<int>& nums);
    static void Test();
};


#endif //LEETCODE_MYARRAY_H
