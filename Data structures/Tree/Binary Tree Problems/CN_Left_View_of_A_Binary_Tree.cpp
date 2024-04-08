/**
 * @file                CN_Left_View_of_A_Binary_Tree.cpp
 * @author              Subodh Chandra Shil
 * @resources:          https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    bool isOriginal;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

/// by the term "left view" it indicates the leftmost node of each level
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> result;
    bool freq[3010]{0};
    queue<pair<TreeNode<int> *, int>> store;
    store.push({root, 1});

    while (!store.empty())
    {
        pair<TreeNode<int> *, int> current = store.front();
        store.pop();
        TreeNode
    }
}

int main()
{

    return 0;
}