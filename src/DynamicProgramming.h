//
// Created by 韩腾 on 2021/11/21.
//

#ifndef LEETCODE_DYNAMICPROGRAMMING_H
#define LEETCODE_DYNAMICPROGRAMMING_H

#include <vector>
using namespace std;

class DynamicProgramming {
public:
    //爬楼梯，一次可以爬一节或者两节，有多少种爬法
    static int climbStairs(int n);
    //买卖股票的最佳时机
    //给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
    //你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。
    //返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0
    static int maxProfit(vector<int>& prices);
    //最大子序和
    //给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
    static int maxSubArray(vector<int>& nums);
    //打家劫舍
    //你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
    //给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。
    static int rob(vector<int>& nums);
};


#endif //LEETCODE_DYNAMICPROGRAMMING_H
