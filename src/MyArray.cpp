//
// Created by 韩腾 on 2021/10/16.
//

#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
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

void MyArray::Rotate(vector<int> &nums, int k) {
    auto len = nums.size();
    if (len <= 1 || k % len == 0)
    {
        return;
    }

    auto j = 0, count = 0;
    auto pre = 0, next = 0;
    for (int i = 0; i < len && count < len; ++i) {
        j = i;
        pre = nums[j];
        do {
            j = (j + k) % len;
            next = nums[j];
            nums[j] = pre;
            pre = next;
            ++count;
        } while (j != i);
    }
}

bool MyArray::containsDuplicate(vector<int> &nums) {
//    sort(nums.begin(), nums.end());
//    for (int i = 1; i < nums.size(); ++i) {
//        if (nums[i -1] == nums[i]){
//            return true;
//        }
//    }
//    return false;
    auto len = nums.size();
    if (len <= 1){
        return false;
    }
    auto flag = new unordered_set<int>();
    for (int i = 0; i < len; ++i) {
        if (flag->find(nums[i]) == flag->end()){
            flag->insert(nums[i]);
        }
        else{
            return true;
        }
    }
    return false;
}

int MyArray::singleNumber(vector<int> &nums) {
    auto result = 0;
    for (auto &num:nums) {
        result ^= num;
    }
    return result;
}

vector<int> MyArray::intersect(vector<int> &nums1, vector<int> &nums2) {
    if (nums1.size() > nums2.size()){
        return intersect(nums2,nums1);
    }
    unordered_map<int, int> flag;
    vector<int> result;
    for (auto &num: nums1) {
        ++flag[num];
    }
//    for (auto &num:nums2) {
//        if (flag[num] > 0){
//            --flag[num];
//            result.push_back(num);
//        }
//    }
    for (auto &num:nums2) {
        if (flag.count(num) > 0){
            --flag[num];
            result.push_back(num);
            if (flag[num] == 0){
                flag.erase(num);
            }
        }
    }

    return result;
}

vector<int> MyArray::plusOne(vector<int> &digits) {
    auto tmp = 1;
    for (int i = digits.size() - 1; i >= 0 ; --i) {
        digits[i] += tmp;
        tmp = digits[i] / 10;
        if (tmp > 0) {
            digits[i] %= 10;
        }else{
            break;
        }
    }

    if (tmp > 0){
        digits.insert(digits.begin(), tmp);
    }
    return digits;
}

void MyArray::moveZeroes(vector<int> &nums) {
    int l = 0, r = 0;
    while (r < nums.size()){
        if (nums[r] != 0){
            int tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            ++l;
        }
        ++r;
    }
}

vector<int> MyArray::twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hp;
    for (int i = 0; i < nums.size(); ++i) {
        auto it = hp.find(target - nums[i]);
        if (it == hp.end()){
            hp.insert(make_pair(nums[i], i));
        }else{
            return {i, it->second};
        }
    }

    return {};
}

void MyArray::Test() {
    auto array = new MyArray();
//    auto vector = new std::vector<int>{0,1,1,2,2};
//    auto len = array->removeDuplicates(*vector);
//    auto vector = new std::vector<int>{1,2,3,4,5,6,7};
//    array->Rotate(*vector, 3);
    auto vector1 = new std::vector<int>{4,9,5};
    auto vector2 = new std::vector<int>{9,4,9,8,4};
    auto result = array->intersect(*vector1, *vector2);
//    cout << "array length: " << len << endl;
}
