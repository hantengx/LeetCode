//
// Created by hanteng on 2018/10/5.
//

#ifndef LEETCODE_SINGLELINKED_H
#define LEETCODE_SINGLELINKED_H

class SingleLinked
{
public:
//    * Definition for singly-linked list.
    struct LinkNode
    {
        int val;
        LinkNode *next;
        LinkNode(int x) : val(x), next(nullptr) {}
    };

    void DeleteNode(LinkNode * node);

};

#endif //LEETCODE_SINGLELINKED_H
