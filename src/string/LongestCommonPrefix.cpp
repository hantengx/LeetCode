//
// Created by hanteng on 2018/10/5.
//

#include "LongestCommonPrefix.h"

std::string LongestCommonPrefix::longestCommonPrefix(std::vector<std::string> &strs)
{
    std::string prefix = "";
    if(strs.size() == 0)
    {
        return prefix;
    }

    int index = 0;
    char c;

    while (index < strs[0].length())
    {
        c = strs[0][index];
        for(const auto &str: strs)
        {
            if(index >= str.length() || c != str[index])
            {
                return prefix;
            }
        }

        prefix += c;
        ++index;
    }

    return prefix;
}
