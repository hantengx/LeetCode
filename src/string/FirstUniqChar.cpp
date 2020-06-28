//
// Created by hanteng on 2018/9/9.
//
#include <unordered_map>
#include <vector>
#include "FirstUniqChar.h"

int FirstUniqChar::first(string s)
{
    vector<int> flag = vector<int>(128);
    for (auto c: s)
    {
        ++flag[c];
    }
    int count = 0;
    for (auto c: s)
    {
        if (flag[c] == 1)
        {
            return count;
        }
        ++count;
    }

    return -1;
}
