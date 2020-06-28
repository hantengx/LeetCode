//
// Created by hanteng on 2018/10/4.
//

#include "IndexOfString.h"

int IndexOfString::First(std::string haystack, std::string needle)
{
    bool flag = false;
    int l1 = haystack.length();
    int l2 = needle.length();
    if(l2 == 0)
    {
        return 0;
    }
    for (int i = 0; i < l1; ++i)
    {
        flag = true;
        for (int j = 0; j < l2; ++j)
        {
            char target = needle.at(j);
            if(i + j >= l1)
            {
                return -1;
            }
            char c = haystack.at(i + j);
            if (c != target)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            return i;
        }
    }
    return -1;
}
