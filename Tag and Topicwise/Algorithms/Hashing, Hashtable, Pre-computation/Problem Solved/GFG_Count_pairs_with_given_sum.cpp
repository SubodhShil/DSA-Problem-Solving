/**
 * @file GFG_Count_pairs_with_given_sum.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-10
 * @problem_source: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        unordered_map<int, int> mp;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a = arr[i];
            int b = k - a;

            /// find if b element is exist in the hash table
            if (mp[b])
                count += mp[b];
            mp[a]++;
        }

        return count;
    }
};

int main()
{

    return 0;
}