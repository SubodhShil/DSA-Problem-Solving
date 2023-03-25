/**
 * @brief
 * @author      Subodh Chandra Shil
 * @source      https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
 * @date        3/24/2023
 * @algorithm   hashing
 */

#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{
    ///@note Set B (a2[]) is said to be a subset of Set A (a1[]) if and only if
    ///      all the elements of set B is present on set A

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[a1[i]]++;

    for (auto i = 0; i < m; i++)
    {
        if (mp[a2[i]] == 0)
            return "No";
        else
            mp[a2[i]]--;
    }

    return "Yes";
}

int main()
{
    /// test cases
    int a1[] = {10, 5, 2, 23, 19};
    int a2[] = {1, 2, 3};
    // int a1[] = {11, 1, 13, 21, 3, 7};
    // int a2[] = {11, 3, 7, 1};

    cout << isSubset(a1, a2, 5, 3) << endl;

    return 0;
}