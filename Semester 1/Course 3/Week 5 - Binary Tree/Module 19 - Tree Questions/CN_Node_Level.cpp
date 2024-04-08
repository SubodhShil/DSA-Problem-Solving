/**
 * @file        CN_Node_Level.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://www.codingninjas.com/studio/problems/node-level_920383
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

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    int level = 1;

    queue<pair<TreeNode<int> *, int>> storeNodes;
    storeNodes.push({root, level});

    while (!storeNodes.empty())
    {
        pair<TreeNode<int> *, int> currentParent = storeNodes.front();

        TreeNode<int> *node = currentParent.first;
        int parentLevel = currentParent.second;

        /// if exist
        if (node->val == searchedValue)
            return parentLevel;

        if (node->left)
        {
            storeNodes.push({node->left, parentLevel + 1});
        }
        if (node->right)
        {
            storeNodes.push({node->right, parentLevel + 1});
        }

        /// delete the current parent
        storeNodes.pop();
    }

    return 0;
}

int main()
{

    return 0;
}