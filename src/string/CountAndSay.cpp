//
// Created by hanteng on 2018/10/4.
//

#include "CountAndSay.h"

std::string CountAndSay::first(int n)
{
    std::string str = "1";
    std::string str1;

    for (int i = 1; i < n; ++i)
    {
        int count = 0;
        int l = str.length();
        str1.clear();

        for(int start = 0, end = 0; end < l; ++end)
        {
            char startChar = str.at(start);
            char endChar = str.at(end);
            if(startChar == endChar)
            {
                count++;
            }
            else
            {
                str1.push_back('0' + count);
                str1.push_back(startChar);
                start = end;
                count = 1;
            }
        }

        str1.push_back('0' + count);
        str1.push_back(str[l - 1]);
        str = str1;
    }

    return str;
}
