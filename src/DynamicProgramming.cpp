//
// Created by 韩腾 on 2021/11/21.
//

#include "DynamicProgramming.h"

int DynamicProgramming::climbStairs(int n) {
    int a = 1, b = 2;
    if(n == 1){
        return 1;
    }
    if (n == 2){
        return 2;
    }

    int result = 0;
    for (int i = 3; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int DynamicProgramming::maxProfit(vector<int> &prices) {
    int min = prices[0];
    int maxProfit = 0;
    for (int price: prices) {
        if (price < min){
            min = price;
        } else {
            maxProfit = max(maxProfit, price - min);
        }
    }

    return maxProfit;
}

//f(i) = max(f(i - 1) + nums[i], nums[i])
int DynamicProgramming::maxSubArray(vector<int> &nums) {
    int pre = 0;
    int result = nums[0];
    for (auto const &num:nums) {
        pre = max(pre + num, num);
        result = max(pre, result);
    }

    return result;
}

//首先，确定状态转移方程，即数学上的递推公式，列举：1，2的情况，以此类推
//1间房，直接投，2间房，偷金额高的那个，3，间房，max(f(1) + 3, f(2)) => f(n) = max(f(n - 2) + n, f(n - 1))
int DynamicProgramming::rob(vector<int> &nums) {
    int p = nums[0];
    int q = p;
    if (nums.size() > 1){
        q = max(nums[0], nums[1]);
    }
    int maxProfit = max(p, q);
    for (int i = 2; i < nums.size(); ++i) {
        maxProfit = max(p + nums[i], q);
        p = q;
        q = maxProfit;
    }

    return maxProfit;
}