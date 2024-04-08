/**
 * @file            CN_Left_Sum.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://www.codingninjas.com/studio/problems/left-sum_920380?leftPanelTab=3
 */

#include <bits/stdc++.h>
using namespace std;

void solver(BinaryTreeNode<int> *root, long long &sum)
{
    if (!root)
        return;

    if (!root->left && !root->right)
        return;

    if (root->left)
        solver(root->left, sum += root->left->data);
    if (root->right)
        solver(root->right, sum);
}

long long leftSum(BinaryTreeNode<int> *root)
{
    long long sum = 0;

    solver(root, sum);

    return sum;
}

int main()
{

    return 0;
}