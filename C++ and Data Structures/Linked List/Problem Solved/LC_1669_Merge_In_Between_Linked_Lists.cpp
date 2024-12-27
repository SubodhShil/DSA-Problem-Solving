/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/merge-in-between-linked-lists/
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

class Solution1
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *itr = list1;
        int idx = 0;

        while (itr)
        {
            ListNode *nextPart = nullptr;

            if (idx == a - 1)
            {
                nextPart = itr->next;
                itr->next = list2;

                while (itr->next)
                {
                    itr = itr->next;
                }

                // find position of b
                while (idx != b - 1)
                {
                    nextPart = nextPart->next;
                    ++idx;
                }

                itr->next = nextPart->next;
                delete nextPart;
            }

            ++idx;
            itr = itr->next;
        }

        return list1;
    }
};

class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *itr1 = list1, *itr2 = list1;

        for (int i = 0; i < b; ++i)
        {
            if (i < a - 1)
                itr1 = itr1->next;
            itr2 = itr2->next;
        }

        itr1->next = list2;

        while (itr1->next)
        {
            itr1 = itr1->next;
        }

        itr1->next = itr2->next;
        return list1;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}