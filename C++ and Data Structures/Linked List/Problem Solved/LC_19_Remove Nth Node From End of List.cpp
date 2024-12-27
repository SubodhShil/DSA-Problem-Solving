/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

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
    void reverseList(ListNode *&head)
    {
        ListNode *prev = nullptr, *curr = head;

        while (curr)
        {
            ListNode *remain = curr->next;
            curr->next = prev;
            prev = curr;
            curr = remain;
        }

        head = prev;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        reverseList(head);
        ListNode *itr = head;

        if (n == 1)
        {
            ListNode *save = head;
            head = head->next;
            delete save;
            reverseList(head);
            return head;
        }

        for (int i = 0; i < n - 2; ++i)
        {
            itr = itr->next;
        }

        ListNode *remain = itr->next;
        itr->next = itr->next->next;
        delete remain;

        reverseList(head);

        return head;
    }
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fast = head, *slow = head;

        for (int i = 1; i <= n; ++i)
        {
            fast = fast->next;
        }

        if (!fast)
        {
            ListNode *res = head->next;
            delete head;
            return res;
        }

        while (fast && fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode *nextPortion = slow->next;
        slow->next = slow->next->next;
        delete nextPortion;
        return head;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}