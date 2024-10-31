/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1?
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
    Node *left, *right;
};

class Solution
{
public:
    int f(Node *root, int sum = 0)
    {
        if (!root)
        {
            return 0;
        }

        sum = sum * 10 + root->data;

        if (!root->left and !root->right)
            return sum;

        return f(root->left, sum) + f(root->right, sum);
    }

    int treePathsSum(Node *root)
    {

        return f(root);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}