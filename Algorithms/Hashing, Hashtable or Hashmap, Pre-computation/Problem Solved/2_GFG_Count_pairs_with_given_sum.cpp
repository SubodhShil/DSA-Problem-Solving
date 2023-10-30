/**
 * @file        2_GFG_Count_pairs_with_given_sum.cpp
 * @author      https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getPairsCount(int arr[], int n, int target)
    {
        int cnt = 0;
        unordered_map<int, int> elementStore;

        for (int i = 0; i < n; ++i)
        {
            int remain = target - arr[i];
            if (elementStore.find(remain) != elementStore.end())
                cnt += elementStore[remain];

            elementStore[arr[i]]++;
        }

        return cnt;
    }
};

int main()
{

    return 0;
}