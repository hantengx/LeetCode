//
// Created by 韩腾 on 2021/10/16.
//

#include <iostream>
#include <vector>
#include "MyArray.h"
using namespace std;

int MyArray::removeDuplicates(vector<int> &nums) {
    auto count = nums.size();
    if (count == 0) {
        return 0;
    }

    auto slow = 1;
    for (int i = 1; i < count; ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[slow] = nums[i];
            ++slow;
        }
    }

    return slow;
}

int MyArray::MaxProfit(vector<int> &prices) {
    auto sum = 0;
    if (prices.size() <= 1)
    {
        return sum;
    }

    for (int i = 1; i < prices.size(); ++i) {
        auto delta = prices[i] - prices[i - 1];
        if (delta > 0){
            sum += delta;
        }
    }

    return sum;
}

void MyArray::Test() {
    auto array = new MyArray();
    auto vector = new std::vector<int>{0,1,1,2,2};
    auto len = array->removeDuplicates(*vector);
    cout << "array length: " << len << endl;
}
