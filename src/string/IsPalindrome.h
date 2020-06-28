//
// Created by hanteng on 2018/9/9.
//

#ifndef LEETCODE_ISPALINDROME_H
#define LEETCODE_ISPALINDROME_H

#include <string>
using namespace std;

class IsPalindrome
{
public:
    bool first(string s);

    inline bool isValid(char& c)
    {
        if((c >= '0' && c <='9')
            ||(c >= 'a' && c <= 'z'))
        {
            return true;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            c -= ('A' - 'a');
            return true;
        }
        return false;
    }
};

#endif //LEETCODE_ISPALINDROME_H
