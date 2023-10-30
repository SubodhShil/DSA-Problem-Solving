/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
    * Author: Subodh Chandra Shil
    * Tag: Two pointers, Array
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        int i = 0, j = 0;
        long long sum = 0;

        while (i < n && j < n)
        {
            sum += arr[j];

            while (i < j && sum > s)
            {
                sum -= arr[i];
                ++i;
            }

            if (sum == s)
                return {i + 1, j + 1};

            ++j;
        }

        return {-1};
    }
};

int main()
{
    return 0;
}