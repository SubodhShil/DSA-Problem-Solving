/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/remove-half-nodes/1
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
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    Node *RemoveHalfNodes(Node *root)
    {

        // Leaf nodes
        if (!root)
            return NULL;

        // updating left and right subtrees
        root->left = RemoveHalfNodes(root->left);
        root->right = RemoveHalfNodes(root->right);

        // Half nodes
        if (root->left and !root->right)
        {
            Node *newNode = root->left;
            delete root;
            return newNode;
        }
        if (!root->left and root->right)
        {
            Node *newNode = root->right;
            delete root;
            return newNode;
        }

        // Full nodes or leaf nodes
        return root;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}