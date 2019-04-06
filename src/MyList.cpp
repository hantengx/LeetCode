#include <iostream>

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
  };
class Solution 
{
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode* first = head;
        ListNode* second = head;
        ListNode* preHalfList = nullptr;
        int count = 0;

        while(second->next != nullptr)
        {
            second = second->next;
            count++;
            if(count % 2 == 0)
            {
                ListNode* tmp = first;
                first = first->next;
                tmp->next = preHalfList;
                preHalfList = tmp;
            }
        }
        
        return false;
    }
};