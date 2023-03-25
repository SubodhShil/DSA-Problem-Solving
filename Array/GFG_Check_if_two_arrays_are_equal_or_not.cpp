/**
 * @brief
 * @author      Subodh Chandra Shil
 * @source      https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&category[]=Hash&sortBy=submissions
 * @date        3/25/2023
 * @algorithm   hashing
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    /// @brief          Function to check if two arrays are equal or not.
    /// @explanation    Two arrays are said to be equal if both of them contain same set of
    ///                    elements, arrangements (or permutation) of elements may be different
    bool check(vector<ll> A, vector<ll> B, int N)
    {
    }
};

int main()
{
    /// test cases
    // vector<ll> A = {1, 2, 5, 4, 0};
    // vector<ll> B = {2, 4, 5, 0, 1};

    vector<ll> A = {1, 2, 5};
    vector<ll> B = {2, 4, 15};
    Solution op1;
    cout << op1.check(A, B, 3);

    return 0;
}