/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/sum-of-k-smallest-elements-in-bst3029/1?
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
    Node *right;
    Node *left;

    Node(int x)
    {
        data = x;
        right = NULL;
        left = NULL;
    }
};

class Sol1
{
public:
    void inorder(Node *root, vector<int> &arr)
    {
        if (!root)
            return;

        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }

    int sum(Node *root, int k)
    {
        vector<int> arr;
        inorder(root, arr);
        return accumulate(arr.begin(), arr.begin() + k, 0);
    }
};


class Sol2
{
public:
    void inorder(Node *root, int &ans, int &k)
    {
        if (!root || k <= 0)
            return;

        inorder(root->left, ans, k);

        if (k > 0)
        {
            ans += root->data;
            --k;
        }

        inorder(root->right, ans, k);
    }

    int sum(Node *root, int k)
    {
        int ans = 0;
        inorder(root, ans, k);
        return ans;
    }
};

int32_t main()
{
    return 0;
}