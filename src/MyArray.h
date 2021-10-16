//
// Created by 韩腾 on 2021/10/16.
//

#ifndef LEETCODE_MYARRAY_H
#define LEETCODE_MYARRAY_H

#include <vector>
using namespace std;

class MyArray {
public:
    static void Test();
//    给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
//    不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
    int removeDuplicates(vector<int>& nums);

    //给定一个数组 prices ，其中 prices[i] 是一支给定股票第 i 天的价格。
    //设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。
    //注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）
    int MaxProfit(vector<int>& prices);

};


#endif //LEETCODE_MYARRAY_H
