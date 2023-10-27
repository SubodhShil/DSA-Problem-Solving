/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
    * https://leetcode.com/problems/maximum-subarray/
    * Author: Subodh Chandra Shil
    * Tag: Array
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxSubarraySum(int arr[], int n)
    {
        long long maximum_sum = -1;
        long long current_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            current_sum += arr[i];

            if (current_sum < 0)
                current_sum = 0;
            else
                maximum_sum = max(maximum_sum, current_sum);
        }

        return maximum_sum;
    }
};

int main()
{

    return 0;
}