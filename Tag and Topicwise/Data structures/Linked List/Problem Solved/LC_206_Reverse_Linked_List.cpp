/**
 * @file        LC_206_Reverse_Linked_List_TODO.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-19
 * @resources:  https://leetcode.com/problems/reverse-linked-list/
 *              https://youtu.be/BMfqGJTcoms
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

/// Iterative and two pointer approach
/// TC: O(N), SC: O(1)
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr, *curr = head;

        while (curr)
        {
            ListNode *remain = curr->next;
            curr->next = prev;
            prev = curr;
            curr = remain;
        }

        return prev;
    }
};

int main()
{

    return 0;
}