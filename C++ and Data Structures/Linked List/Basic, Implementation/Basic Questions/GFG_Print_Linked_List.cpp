/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/print-linked-list-elements/1?
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class Solution
{
public:
    void printListRecursive(Node *head)
    {
        if (!head)
            return;

        cout << head->data << " ";
        printList(head->next);
    }

    void printList(Node *head)
    {
        Node *itr = head;

        for (; itr; itr = itr->next)
        {
            cout << itr->data << " ";
        }
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}