/**
 * @file        GFG_Min_Subsets_with_Consecutive_Numbers.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-14
 * @resources:  https://practice.geeksforgeeks.org/problems/min-subsets-with-consecutive-numbers0601/1?page=3&difficulty[]=0&status[]=solved&category[]=Arrays&sortBy=submissions
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numofsubset(int arr[], int n)
    {
        int minimumSize = 1;
        sort(arr, arr + n);
        int cnt = 1;

        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] + 1 != arr[i + 1])
            {
                ++cnt;
            }
        }

        return minimumSize = cnt;
    }
};

int main()
{
    // int arr[] = {100, 56, 5, 6, 102, 58, 101, 57, 7, 103};
    // int arr[] = {10, 100, 105};
    int arr[] = {6, 2, 5, 7, 9, 3};
    Solution sol;
    cout << sol.numofsubset(arr, 6);

    return 0;
}