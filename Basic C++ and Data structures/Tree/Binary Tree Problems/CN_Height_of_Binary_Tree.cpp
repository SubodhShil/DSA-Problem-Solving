#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int solver(TreeNode<int> *root)
{
    if (!root)
        return -1;

    int leftSide = solver(root->left);
    int rightSide = solver(root->right);

    return max(leftSide, rightSide) + 1;
}

int maxDepth(TreeNode<int> *root)
{
    return solver(root);
}

int main()
{

    return 0;
}