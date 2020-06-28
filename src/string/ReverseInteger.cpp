//
// Created by hanteng on 2018/9/9.
//

#include "ReverseInteger.h"
#include <limits>
#include <cstdlib>

using  namespace std;

int ReverseInteger::reverse(int x)
{
    long long y = 0;
    while(x != 0)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }

    if(abs(y) > numeric_limits<int>::max())
    {
        return 0;
    }

    return y;
}
