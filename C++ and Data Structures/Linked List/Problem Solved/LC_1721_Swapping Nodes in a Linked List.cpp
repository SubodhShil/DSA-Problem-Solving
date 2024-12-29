/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *it1 = head, *it2 = head, *save = nullptr;

        while (--k)
        {
            it1 = it1->next;
        }
        save = it1;
        it1 = it1->next;

        while (it1)
        {
            it1 = it1->next;
            it2 = it2->next;
        }

        swap(save->val, it2->val);

        return head;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}