//
// Created by 韩腾 on 2021/11/21.
//

#include "SortAndSearch.h"

int SortAndSearch::firstBadVersion(int n) {
    int left = 1, right = n;
    //防止溢出
    int mid = left + (right - left) / 2;
    while (left < right){
        if(isBadVersion(mid)){
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}