/**
 * @file            LC_25_Reverse_Nodes_in_k-Group.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-06-26
 * @resources:      https://leetcode.com/problems/reverse-nodes-in-k-group/
 *
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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == nullptr)
            return nullptr;

        /// counting nodes and check if group creation is possible
        int nodesCnt = 0;
        ListNode *it = head;
        while (it)
        {
            ++nodesCnt;
            it = it->next;
        }

        if (nodesCnt < k)
            return head;

        /// reverse first 'k' nodes
        ListNode *prev = nullptr, *curr = head;
        int count = 0;

        while (curr && count < k)
        {
            ListNode *remain = curr->next;
            curr->next = prev;
            prev = curr;
            curr = remain;
            ++count;
        }

        /// recursion
        if (curr != nullptr)
        {
            head->next = reverseKGroup(curr, k);
        }

        return prev;
    }
};

int main()
{

    return 0;
}