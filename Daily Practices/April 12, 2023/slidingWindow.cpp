/**
 * @file slidingWindow.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-11
 * @learning_source:    https://www.geeksforgeeks.org/window-sliding-technique/
 */

/*
    You are given an array with 'n' elements, calculate the minimum sum of k, consecutive elements

    Sliding window algorithm:
        1. Compute sum of first k elements (index 0 till k)
        2. While increasing i,  sum = sum - a[i - 1] and
                                sum = sum + a[i + k - 1]
*/

#include <bits/stdc++.h>
using namespace std;

int minimumSumOfK(vector<int> arr, int n, int k)
{
    /// handle edge case of size
    if (k > n || n == 0)
    {
        cout << "Invalid\n";
        exit(0);
    }

    /// pre-computation phase
    /// compute sum of first 'k' elements
    /// as per question, assume sum of first 'k' elements is minimum
    int min_k_sum = accumulate(arr.begin(), arr.begin() + k, 0);
    int window_k_sum = min_k_sum;

    for (int i = k; i < n; i++)
    {
        window_k_sum = window_k_sum + arr[i] - arr[i - k];
        /// required statement as per question to get
        /// minimum sum of the 'k' consecutive elements
        min_k_sum = min(min_k_sum, window_k_sum);
    }

    return min_k_sum;
}

int main()
{
    vector<int> v{10, 4, 2, 5, 6, 3, 8, 1};
    cout << minimumSumOfK(v, 8, 3) << endl;

    return 0;
}