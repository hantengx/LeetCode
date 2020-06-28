//
// Created by hanteng on 2018/10/5.
//

#include "SingleLinked.h"

void SingleLinked::DeleteNode(SingleLinked::LinkNode* node)
{
    int numbers[] = {4,5,1,9};

    LinkNode *head = nullptr;
    auto end = head;

    for (auto number: numbers)
    {
        if(head == nullptr)
        {
            head = new LinkNode(number);
            end = head;
        }

        end->next = new LinkNode(number);
        end = end->next;
    }

    auto preNode = head;
    while (preNode != nullptr)
    {
        if(preNode->val == node->val)
        {
            head = preNode->next;
            break;
        }
        else if(preNode->next->val == node->val)
        {
            preNode->next = preNode->next->next;
            break;
        }
        else
        {
            preNode = preNode->next;
        }
    }
}
