#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode right) : val(x), left(left), right(right) {}
};

class Solution1
{
public:
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

class Solution2
{
public:
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;

        int leftHeight = leftSubtreeHeight(root);
        int rightHeight = rightSubtreeHeight(root);

        if (leftHeight == rightHeight)
            return pow(2, rightHeight) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int leftSubtreeHeight(TreeNode *node)
    {
        int height = 0;
        while (node)
        {
            ++height;
            node = node->left;
        }

        return height;
    }

    int rightSubtreeHeight(TreeNode *node)
    {
        int height = 0;
        while (node)
        {
            ++height;
            node = node->right;
        }

        return height;
    }
};

int main()
{

    return 0;
}
