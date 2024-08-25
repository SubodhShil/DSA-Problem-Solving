/*
                            ॐ JAY JAY SRI RAM ॐ

    * Binary tree creation from an given input array
    * Author: Subodh Chandra Shil
    * https://www.geeksforgeeks.org/problems/binary-tree-representation/1?

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;
    return (node);
}

class Solution
{
public:
    node *populate(node *root, vector<int> &vec, int idx)
    {
        if (!vec.size())
            return nullptr;

        // 0th index is the root of the tree
        if (!root)
            root = newNode(vec[idx]);

        // rest of the elements (from index 1) are
        if (2 * idx + 1 < vec.size())
            root->left = populate(root->left, vec, 2 * idx + 1);

        if (2 * idx + 2 < vec.size())
            root->right = populate(root->right, vec, 2 * idx + 2);

        return root;
    }

    void create_tree(node *root, vector<int> &vec)
    {
        root = populate(root, vec, 0);
    }
};

int32_t main()
{
    return 0;
}