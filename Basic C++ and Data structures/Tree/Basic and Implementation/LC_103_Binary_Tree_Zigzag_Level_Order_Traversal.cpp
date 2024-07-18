/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;

        if (!root)
            return result;

        queue<TreeNode *> nodes;
        nodes.push(root);
        bool direction = 0; // 0 -> left to right; 1 -> right to left

        while (!nodes.empty())
        {
            int size = nodes.size();
            vector<int> innerNodes(size);

            // extra work: direction wise value storing
            for (int i = 0; i < size; ++i)
            {
                TreeNode *currentNode = nodes.front();
                nodes.pop();

                int index = (!direction) ? i : (size - 1 - i);
                innerNodes[index] = currentNode->val;

                // storing left and right values to the queue
                if (currentNode->left)
                    nodes.push(currentNode->left);
                if (currentNode->right)
                    nodes.push(currentNode->right);
            }

            // change the direction
            direction = !direction;
            result.push_back(innerNodes);
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}