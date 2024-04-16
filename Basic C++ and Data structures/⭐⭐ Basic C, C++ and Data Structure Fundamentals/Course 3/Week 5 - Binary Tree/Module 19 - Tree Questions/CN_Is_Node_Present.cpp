#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (!root)
        return 0;

    if (x == root->data)
        return 1;

    return isNodePresent(root->left, x) || isNodePresent(root->right, x);
}

int main()
{

    return 0;
}