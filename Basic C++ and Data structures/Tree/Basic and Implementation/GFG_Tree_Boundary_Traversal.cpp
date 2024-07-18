/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1?
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
    Node *left, *right;
};

class Solution
{
public:
    bool isLeaf(Node *node)
    {
        return (!node->left and !node->right);
    }

    void leftBoundarySide(Node *root, vector<int> &result)
    {
        Node *current = root->left;

        while (current)
        {
            if (!isLeaf(current))
                result.push_back(current->data);

            // move to next left or right side
            if (current->left)
                current = current->left;
            else
                current = current->right;
        }
    }

    void rightBoundarySide(Node *root, vector<int> &result)
    {
        vector<int> temp;

        Node *current = root->right;

        while (current)
        {
            if (!isLeaf(current))
                temp.push_back(current->data);

            // move to next right or left side
            if (current->right)
                current = current->right;
            else
                current = current->left;
        }

        for (auto it = temp.rbegin(); it != temp.rend(); ++it)
            result.push_back(*it);
    }

    void addLeaf(Node *root, vector<int> &result)
    {
        if (isLeaf(root))
        {
            result.push_back(root->data);
            return;
        }

        if (root->left)
            addLeaf(root->left, result);
        if (root->right)
            addLeaf(root->right, result);
    }

    vector<int> boundary(Node *root)
    {
        vector<int> result;

        if (!root)
            return result;
        if (!isLeaf(root))
            result.push_back(root->data);

        // Add the left nodes
        leftBoundarySide(root, result);

        // Add the leave nodes
        addLeaf(root, result);

        // Add the right nodes
        rightBoundarySide(root, result);

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}