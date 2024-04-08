/**
 * @file            CN_Node_Level.cpp
 * @author          Subodh Chandra Shil
 *
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T val;
    bool isOriginal;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    int nodeLevel(TreeNode<int> *root, int searchedValue)
    {
        if (!root)
            return 0;

        queue<pair<TreeNode<int> *, int>> storeNodes;
        storeNodes.push({root, 1});

        while (!storeNodes.empty())
        {
            pair<TreeNode<int> *, int> parent = storeNodes.front();
            TreeNode<int> *node = parent.first;
            int level = parent.second;

            storeNodes.pop();

            if (node->val == searchedValue)
                return level;

            if (node->left)
                storeNodes.push({node->left, level + 1});
            if (node->right)
                storeNodes.push({node->right, level + 1});
        }

        return 0;
    }
};

int main()
{

    return 0;
}