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

    //给定一个数组 prices ，其中prices[i] 是一支给定股票第 i 天的价格。
    //设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。
    //注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）
    int MaxProfit(vector<int>& prices);
    //给定一个数组，将数组中的元素向右移动k个位置，其中k是非负数。
    //进阶：
    //尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
    //你可以使用空间复杂度为O(1) 的原地算法解决这个问题吗？
    void Rotate(vector<int>& nums, int k);
    //给定一个整数数组，判断是否存在重复元素。
    bool containsDuplicate(vector<int>& nums);
    //给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
    int singleNumber(vector<int>& nums);
    //给定两个数组，编写一个函数来计算它们的交集。
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
    //给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
    //最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
    //你可以假设除了整数 0 之外，这个整数不会以零开头。
    vector<int> plusOne(vector<int>& digits);
};


#endif //LEETCODE_MYARRAY_H
