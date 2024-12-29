/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/0
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
    Node *addOne(Node *head)
    {
        Node *itr = head;
        stack<Node *> nodeStack;

        while (itr)
        {
            nodeStack.push(itr);
            itr = itr->next;
        }

        int carry = 1;
        Node *result = nullptr;

        while (!nodeStack.empty() || carry)
        {

            Node *curr = nullptr;
            if (!nodeStack.empty())
            {
                curr = nodeStack.top();
                nodeStack.pop();
            }

            int sum = (!curr ? 0 : curr->data) + carry;

            int newNodeVal = sum % 10;
            carry = sum / 10;

            Node *newNode = new Node(newNodeVal);
            if (!result)
            {
                result = newNode;
            }
            else
            {
                newNode->next = result;
                result = newNode;
            }
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}