/**
 * @file        LC_876_Middle_of_the_Linked_List.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://leetcode.com/problems/middle-of-the-linked-list/description/
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

class Solution1
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            ++cnt;
            tmp = tmp->next;
        }

        return cnt;
    }

    ListNode *middleNode(ListNode *head)
    {
        int n = size(head);
        ListNode *it = head;

        for (int i = 1; i <= n / 2; ++i)
        {
            it = it->next;
        }

        return it;
    }
};

class Solution2
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};