//
// Created by 韩腾 on 2018/8/23.
//给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//
//示例 1:
//
//给定数组 nums = [1,1,2],
//
//函数应该返回新的长度 2, 并且原数组 nums 的前两个元素被修改为 1, 2。
//
//你不需要考虑数组中超出新长度后面的元素。
//

#ifndef LEETCODE_REMOVEDUPLICATE_H
#define LEETCODE_REMOVEDUPLICATE_H

#include <vector>

class RemoveDuplicate
{
public:
    int RemoveOld(std::vector<int>& nums);
    int Remove(std::vector<int>& nums);
};


#endif //LEETCODE_REMOVEDUPLICATE_H
