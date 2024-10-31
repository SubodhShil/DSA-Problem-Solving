/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1?
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

class Solution
{
public:
    int countNodes(Node *root, int cnt = 0)
    {
        if (!root or (!root->left and !root->right))
            return 0;

        int leftCnt = countNodes(root->left, cnt + 1);
        int rightCnt = countNodes(root->right, cnt + 1);

        return 1 + leftCnt + rightCnt;
    }

    int countNonLeafNodes(Node *root)
    {
        return countNodes(root);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}