/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/add-two-numbers/
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = new ListNode(0), *head = result;
        int carry = 0;

        while (l1 || l2 || carry)
        {
            int digit1 = (l1) ? l1->val : 0;
            int digit2 = (l2) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int current = sum % 10;
            carry = sum / 10;

            ListNode *newNode = new ListNode(current);
            head->next = newNode;
            head = head->next;

            l1 = (l1) ? l1->next : nullptr;
            l2 = (l2) ? l2->next : nullptr;
        }

        ListNode *temp = result;
        head = result->next;
        delete temp;
        return head;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}