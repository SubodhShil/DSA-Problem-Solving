/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
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
    int getDecimalValue(ListNode *head)
    {

        ListNode *itr = head;
        int n = 0;
        while (itr)
        {
            ++n;
            itr = itr->next;
        }

        itr = head;
        int idx = 1, result = 0;

        while (itr)
        {
            result += itr->val * pow(2, n - idx);
            itr = itr->next;
            ++idx;
        }

        return result;
    }
};

// Optimized solution
class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        ListNode *itr = head;
        int result = 0;
        while (itr)
        {
            // formula
            result = result * 2 + itr->val;
            itr = itr->next;
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}