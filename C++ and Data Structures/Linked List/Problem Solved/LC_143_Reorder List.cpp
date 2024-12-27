/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/reorder-list/
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

class Solution
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

    void reorderList(ListNode *head)
    {
        ListNode *fast = head, *slow = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        reverseList(slow);

        ListNode *curr = head, *rev = slow;
        while (rev->next)
        {
            ListNode *temp = curr->next;
            ListNode *tempRev = rev->next;
            curr->next = rev;
            rev->next = temp;
            curr = temp;
            rev = tempRev;
        }
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}