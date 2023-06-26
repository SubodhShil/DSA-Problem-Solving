/**
 * @file            LC_83_Remove_Duplicates_from_Sorted_List.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-06-23
 * @resources:      https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *it = head;

        if (it == nullptr)
            return head;

        while (it->next != nullptr)
        {
            if (it->val == it->next->val)
            {
                ListNode *delNode = it->next;
                it->next = delNode->next;
                delete delNode;
            }

            if (it->next == nullptr)
                break;
            else if (it->val != it->next->val)
                it = it->next;
        }

        return head;
    }
};

class Solution2
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *curr = head;

        while (curr != nullptr)
        {
            while (curr->next != nullptr && curr->val == curr->next->val)
            {
                ListNode *delNode = curr->next;
                curr->next = curr->next->next;
                delete delNode;
            }

            curr = curr->next;
        }

        return head;
    }
};

int main()
{

    return 0;
}