#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void helper(TreeNode *root, int &sum)
    {
        if (!root)
            return;

        if (root->left)
        {
            if (!root->left->left && !root->left->right)
                sum += root->left->val;
            else
                helper(root->left, sum);
        }

        if (root->right)
            helper(root->right, sum);
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        int sum = 0;
        helper(root, sum);

        return sum;
    }
};

int main()
{

    return 0;
}