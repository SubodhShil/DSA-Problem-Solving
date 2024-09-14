/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode *makeBST(vector<int> &nums, int s, int e)
    {
        if (s > e)
            return nullptr;

        int mid = s + ((e - s) / 2);
        TreeNode *newNode = new TreeNode(nums[mid]);

        newNode->left = makeBST(nums, s, mid - 1);
        newNode->right = makeBST(nums, mid + 1, e);

        return newNode;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return makeBST(nums, 0, nums.size() - 1);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;

    return 0;
}