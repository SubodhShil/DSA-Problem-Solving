/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/odd-even-linked-list/
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
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head or !head->next or !head->next->next)
            return head;

        ListNode *odd = head, *even = head->next, *evenHead = even;
        while (even && even->next)
        {
            // link updation
            odd->next = odd->next->next;
            even->next = even->next->next;

            // iterate after link updation
            odd = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}