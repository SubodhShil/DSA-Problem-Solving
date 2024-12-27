/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/remove-nodes-from-linked-list/
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

    ListNode *removeNodes(ListNode *head)
    {
        reverseList(head);

        ListNode *result = nullptr;
        int maxVal = INT_MIN;

        while (head)
        {
            int currentVal = head->val;

            // insert at head
            if (currentVal >= maxVal)
            {
                ListNode *newNode = new ListNode(currentVal);
                newNode->next = result;
                result = newNode;
                maxVal = currentVal;
            }

            head = head->next;
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}