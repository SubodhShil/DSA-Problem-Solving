/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
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
    int pairSum(ListNode *head)
    {
        int maxTwinSum = 0;
        unordered_map<int, ListNode *> ump;
        ListNode *itr = head;

        int n = 0;
        while (itr)
        {
            ump[n++] = itr;
            itr = itr->next;
        }

        for (int i = 0; i < n / 2; ++i)
        {
            int twin = n - 1 - i;
            int sum = ump[i]->val + ump[twin]->val;
            maxTwinSum = max(maxTwinSum, sum);
        }

        return maxTwinSum;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}