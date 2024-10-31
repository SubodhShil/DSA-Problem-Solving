/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/size-of-binary-tree/1?
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// BFS solution
class Solution1
{
public:
    int getSize(Node *node)
    {

        if (!node)
            return 0;

        queue<Node *> allNodes;
        allNodes.push(node);
        int totalNodes = 1;

        while (!allNodes.empty())
        {
            Node *currentNode = allNodes.front();
            allNodes.pop();

            if (currentNode->left)
            {
                allNodes.push(currentNode->left);
                ++totalNodes;
            }

            if (currentNode->right)
            {
                allNodes.push(currentNode->right);
                ++totalNodes;
            }
        }

        return totalNodes;
    }
};

// DFS solution
class Solution
{
public:
    int countNodes(Node *node, int count = 0)
    {
        if (!node)
            return 0;

        int leftCnt = 0, rightCnt = 0;

        if (node->left)
            leftCnt = countNodes(node->left, count + 1);

        if (node->right)
            rightCnt = countNodes(node->right, count + 1);

        return 1 + leftCnt + rightCnt;
    }

    int getSize(Node *node)
    {
        return countNodes(node);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}