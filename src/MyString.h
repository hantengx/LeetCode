//
// Created by teng on 2021/11/2.
//

#ifndef LEETCODE_MYSTRING_H
#define LEETCODE_MYSTRING_H

#include <string>
#include <vector>

using namespace std;

class MyString {
public:
    //分割回文串
    //给你一个字符串 s，请你将 s 分割成一些子串，使每个子串都是 回文串 。返回 s 所有可能的分割方案。
    //回文串 是正着读和反着读都一样的字符串。
    //输入：s = "aab"
    //输出：[["a","a","b"],["aa","b"]]
    vector<vector<string>> partition(string s);
};


#endif //LEETCODE_MYSTRING_H
