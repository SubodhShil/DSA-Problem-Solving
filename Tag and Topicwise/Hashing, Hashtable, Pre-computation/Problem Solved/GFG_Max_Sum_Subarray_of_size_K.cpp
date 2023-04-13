/**
 * @file GFG_Max_Sum_Subarray_of_size_K.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-11
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        /// base case handle
        if (K > N || N == 0)
            return -1;

        /// compute sum of first 'k' elements
        long max_k_sum = 0;
        for (int i = 0; i < K; i++)
        {
            max_k_sum = (long)Arr[i] + (long)max_k_sum;
        }

        long window_k_sum = max_k_sum;

        for (int i = K; i < N; i++)
        {
            /// computing next k sum
            window_k_sum = window_k_sum + Arr[i] - Arr[i - K];

            /// update max
            max_k_sum = max(max_k_sum, window_k_sum);
        }

        return max_k_sum;
    }
};

int main()
{
    Solution sol;
    vector<int> v{30, 50, 30, 60, 70, 60};
    cout << sol.maximumSumSubarray(3, v, 6) << endl;

    return 0;
}