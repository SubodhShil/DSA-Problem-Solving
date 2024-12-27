/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/delete-alternate-nodes/1?
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        int data = x;
        next = NULL;
    }
};

class Solution
{
public:
    void deleteAlt(struct Node *head)
    {
        struct Node *itr = head;

        int idx = 1;
        while (itr)
        {

            if (idx & 1)
            {
                if (itr->next)
                {
                    struct Node *dropNode = itr->next;
                    itr->next = itr->next->next;

                    delete dropNode;
                }
            }

            itr = itr->next;
        }
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}