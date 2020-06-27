/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <stdlib.h>
#include <time.h>
#include <iostream> 

using namespace std;

class MergeList
    {
public:
    struct ListNode 
    {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
    };

    static ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* l3 = new ListNode(0);
        ListNode* tmp = l3;
        while(l1 != nullptr && l2 != nullptr)
        {
            if(l1->val < l2->val)
            {
                l3->next = l1;
                l1 = l1->next;
            }
            else
            {
                l3->next = l2;
                l2 = l2->next;
            }
            
            l3 = l3->next;
        }
        if(l1 != nullptr)
        {
            l3->next = l1;
        }
        else if(l2 != nullptr)
        {
            l3->next = l2;
        }
        
        return tmp->next;
    }

    static MergeList::ListNode* getList(int length);
    static void print(MergeList::ListNode * head);
    static int test(int argc, char const *argv[]);
};

MergeList::ListNode* MergeList::getList(int length)
{
    auto head = new MergeList::ListNode(rand() % 10);;
    auto tmp = head;

    for(size_t i = 0; i < length; i++)
    {
        int value = tmp->val + rand() % 10;
        tmp->next = new MergeList::ListNode(value);
        tmp = tmp->next;
    }
    
    return head;
}

void MergeList::print(MergeList::ListNode * head)
{
    while(head != nullptr)
    {
        cout << head->val << ",";
        head = head->next;
    }
    cout << endl;
}

int MergeList::test(int argc, char const *argv[])
{
    srand(time(0));
    auto l1 = getList(10);
    auto l2 = getList(10);

    print(l1);
    print(l2);
    auto l3 = MergeList::mergeTwoLists(l1, l2);
    print(l3);

    return 0;
}
