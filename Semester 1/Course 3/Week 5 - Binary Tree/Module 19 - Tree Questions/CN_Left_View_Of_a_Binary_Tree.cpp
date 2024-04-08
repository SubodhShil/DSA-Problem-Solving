/**
 * @file            CN_Left_View_Of_a_Binary_Tree.cpp
 * @author          Subodh Chandra Shil
 * @link:           https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Solution1
{
public:
    vector<int> getLeftView(TreeNode<int> *root)
    {
        if (!root)
            return {};

        vector<bool> visited(3005, false);
        vector<int> leftViewNodes;

        queue<pair<TreeNode<int> *, int>> nodeStore;
        nodeStore.push({root, 0});

        while (!nodeStore.empty())
        {
            TreeNode<int> *currentParent = nodeStore.front().first;
            int parentLevel = nodeStore.front().second;

            nodeStore.pop();

            if (!visited[parentLevel])
            {
                visited[parentLevel] = 1;
                leftViewNodes.push_back(currentParent->data);
            }

            if (currentParent->left)
                nodeStore.push({currentParent->left, parentLevel + 1});

            if (currentParent->right)
                nodeStore.push({currentParent->right, parentLevel + 1});
        }

        return leftViewNodes;
    }
};

int main()
{

    return 0;
}