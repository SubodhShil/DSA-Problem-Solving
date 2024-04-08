/**
 * @file        LC_141_Linked_List_Cycle.cpp
 * @author      Subodh Chandra Shil
 * @resources:  
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = nullptr;
        ListNode *fast = nullptr;

        while (fast != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{

    return 0;
}