/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?
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
        next = NULL;
    }
};

class Solution
{
public:
    Node *insertAtEnd(Node *head, int x)
    {

        Node *itr = head;
        Node *newNode = new Node(x);
        if (!head)
            return newNode;

        while (1)
        {
            if (!itr->next)
            {
                itr->next = newNode;
                break;
            }
            itr = itr->next;
        }

        return head;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}
b