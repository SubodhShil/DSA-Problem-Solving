/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1?
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

struct Node
{
    int key;
    Node *left, *right;
};

long long totalSum(Node *root, long long sum = 0)
{
    if (!root)
        return 0;

    long long leftSum = 0, rightSum = 0;

    if (root->left)
        leftSum = totalSum(root->left, sum + root->left->key);

    if (root->right)
        rightSum = totalSum(root->right, sum + root->right->key);

    return leftSum + rightSum + root->key;
}

long int sumBT(Node *root)
{
    return totalSum(root);
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}