/**
 * @file        LC_199_Binary_Tree_Right_Side_View.cpp
 * @author      Subodh Chandra Shil
 * @link        https://leetcode.com/problems/binary-tree-right-side-view/
 */

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
    vector<int> rightSideView(TreeNode *root)
    {
        if (!root)
            return {};

        vector<bool> visitedLevel(110, false);
        vector<int> rightViewNodes;

        queue<pair<TreeNode *, int>> nodeStore;
        nodeStore.push({root, 0});

        while (!nodeStore.empty())
        {
            TreeNode *currentNode = nodeStore.front().first;
            int parentLevel = nodeStore.front().second;

            if (!visitedLevel[parentLevel])
            {
                visitedLevel[parentLevel] = 1;
                rightViewNodes.push_back(currentNode->val);
            }

            if (currentNode->right)
                nodeStore.push({currentNode->right, parentLevel + 1});

            if (currentNode->left)
                nodeStore.push({currentNode->left, parentLevel + 1});

            /// empty
            nodeStore.pop();
        }

        return rightViewNodes;
    }
};

int main()
{

    return 0;
}