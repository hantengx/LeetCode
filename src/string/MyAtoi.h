//
// Created by hanteng on 2018/9/24.
//

#ifndef LEETCODE_MYATOI_H
#define LEETCODE_MYATOI_H

#include <string>
using namespace std;

class MyAtoi
{
public:
//    static const int INT_MIN = 1 << 31;
//    static const int INT_MAX = (1L << 31) - 1;

    int first(string str);

    inline bool isNumber(const char& c)
    {
        return c >= '0' && c <= '9';
    }
};

#endif //LEETCODE_MYATOI_H
