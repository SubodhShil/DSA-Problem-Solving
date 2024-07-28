/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
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
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        // vertical order, level, list of nodes
        map<int, map<int, multiset<int>>> nodes;

        // queue for level order traversing
        queue<pair<pair<int, int>, TreeNode *>> fifo_nodes;

        // push the first node of the binary tree
        fifo_nodes.push({{0, 0}, root});

        while (!fifo_nodes.empty())
        {
            auto p = fifo_nodes.front();
            fifo_nodes.pop();

            int vertical_order_i = p.first.first, level_order_i = p.first.second;
            TreeNode *node = p.second;
            nodes[vertical_order_i][level_order_i].insert({node->val});

            if (node->left)
                fifo_nodes.push({{vertical_order_i - 1, level_order_i + 1}, node->left});
            if (node->right)
                fifo_nodes.push({{vertical_order_i + 1, level_order_i + 1}, node->right});
        }

        vector<vector<int>> result;

        for (auto &p : nodes)
        {
            vector<int> inner;
            for (auto &q : p.second)
                inner.insert(inner.end(), q.second.begin(), q.second.end());

            result.push_back(inner);
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}