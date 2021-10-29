//
// Created by teng on 2021/10/28.
//

#include "MyVector.h"
#include <unordered_map>
using namespace std;

int MyVector::singleNumber(vector<int> &nums) {
    int num = 0;
    for (int i = 0; i < nums.size(); ++i) {
        num ^= nums[i];
    }

    return num;
}

int MyVector::majorityElement(vector<int> &nums) {
//    unordered_map<int, int> flag;
//    for (int i = 0; i < nums.size(); ++i) {
//        if (++flag[nums[i]] > nums.size() / 2){
//            return nums[i];
//        }
//    }
//    return 0;
    //候选人算法
    int num = 0, count = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (count == 0){
            num = nums[i];
            ++count;
        } else if (num == nums[i]){
            ++count;
        } else {
            --count;
        }
    }
    return num;
}

void MyVector::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int a = m - 1, b = n - 1;
    for (int i = m + n - 1; i >= 0 && b >= 0; --i) {
        if (a < 0 || nums1[a] <= nums2[b]){
            nums1[i] = nums2[b];
            --b;
        } else {
            nums1[i] = nums1[a];
            nums1[a] = 0;
            --a;
        }
    }
}