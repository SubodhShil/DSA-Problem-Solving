/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

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
    int maxLevelSum(TreeNode *root)
    {
        if (!root)
            return 0;

        int maxSum = INT32_MIN;
        int level = 1;
        int maxLevel = 1;

        queue<TreeNode *> qu;
        qu.push(root);

        while (!qu.empty())
        {
            int levelSum = 0;
            int levelSize = qu.size();

            for (int i = 0; i < levelSize; ++i)
            {
                TreeNode *current = qu.front();
                qu.pop();
                levelSum += current->val;

                if (current->left)
                    qu.push(current->left);
                if (current->right)
                    qu.push(current->right);
            }

            if (levelSum > maxSum)
            {
                maxSum = levelSum;
                maxLevel = level;
            }

            ++level;
        }

        return maxLevel;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}