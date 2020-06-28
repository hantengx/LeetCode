//
// Created by hanteng on 2018/9/24.
//

#include "MyAtoi.h"

int MyAtoi::first(string str)
{
    long number = 0;
    int mark = 0;

    for(const auto &c: str)
    {
        if (mark == 0)
        {
            if (c == ' ')
            {
                continue;
            }

            if (c == '-')
            {
                mark = -1;
                continue;
            }
            else if(c == '+')
            {
                mark = 1;
                continue;
            }
        }

        if (isNumber(c))
        {
            if(mark == 0)
            {
                mark = 1;
            }
            number = (number * 10) + (c - '0' );

            if (number > INT_MAX)
            {
                number = mark > 0 ? INT_MAX : INT_MIN;
                break;
            }
        }
        else
        {
            break;
        }
    }
    return number * mark;
}
