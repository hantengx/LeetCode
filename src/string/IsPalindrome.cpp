//
// Created by hanteng on 2018/9/9.
//

#include "IsPalindrome.h"

bool IsPalindrome::first(string s)
{
    if(s.length() == 0)
    {
        return true;
    }
    for(auto first = s.begin(), second = s.end() - 1; first <= second; ++first, --second)
    {
        while(!isValid(*first) && first < second)
        {
            ++first;
        }

        while(!isValid(*second) && second > first)
        {
            second--;
        }
        if(*first != *second)
        {
            return false;
        }
    }

    return true;
}
