/**
 * @brief
 * @author      Subodh Chandra Shil
 * @source      https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&category[]=Hash&sortBy=submissions
 * @date        3/25/2023
 * @algorithm   bruteforce  (Solution1)
 *              hashing     (Solution2)
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution1
{
public:
    /// @brief          Function to check if two arrays are equal or not.
    /// @explanation    Two arrays are said to be equal if both of them contain same set of
    ///                    elements, arrangements (or permutation) of elements may be different
    bool check(vector<ll> A, vector<ll> B, int N)
    {
        /**
         * @odd_case:
         * [2, 3] => 2 + 3 = 5
         * [4, 1] => 4 + 1 = 5
         * [1, 1]
         * [2, 2]
         * @good_case:
         * {1,2,5,4,0}
         * {2,4,5,0,1}
         */

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        for (int i = 0; i < N; i++)
        {
            if (A[i] != B[i])
                return false;
        }

        return true;
    }
};

class Solution2
{
public:
    /// Hashing solution
    bool check(vector<ll> A, vector<ll> B, int N)
    {
        unordered_map<int, int> hashMap;

        /// storing data occurrences into the hashmap
        for (auto i : A)
            hashMap[i]++;

        /// delete identical element occurrences
        for (auto i : B)
            hashMap[i]--;

        /// equal array would have no occurrence after
        /// the abovementioned process
        for (auto i : hashMap)
            if (i.second)
                return false;

        return true;
    }
};

int main()
{
    /// test cases
    vector<ll> A = {1, 2, 5, 4, 0};
    vector<ll> B = {2, 4, 5, 0, 1};

    // vector<ll> A = {1, 2, 5};
    // vector<ll> B = {2, 4, 15};

    // Solution1 op1;
    // cout << op1.check({1, 1}, {2, 2}, 3);
    // cout << op1.check(A, B, 5);

    Solution2 op2;
    cout << op2.check(A, B, 5);

    return 0;
}