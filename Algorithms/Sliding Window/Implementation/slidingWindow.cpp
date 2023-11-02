/*
                            ॐ ॐ
    * https://www.geeksforgeeks.org/window-sliding-technique/
    * https://www.geeksforgeeks.org/find-maximum-minimum-sum-subarray-size-k/
    * https://workat.tech/problem-solving/approach/mkss/maximum-k-subarray-sum
    * Maximum k-subarray sum
    * Author: Subodh Chandra Shil
    * Tag: Sliding Window, Array
    * ACCEPTED
                            ॐ ॐ
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
        return -1;

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

/// @problem_link: https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution
{
public:
    /// Solution 1
    long maximumSumSubarray1(int k, vector<int> &arr, int n)
    {
        if (k > n || n == 0)
            return -1;

        /// pre-compute the first window value as maximum
        long long max_k_sum = 0;
        for (int i = 0; i < k; ++i)
            max_k_sum += arr[i];
        long long current_window_sum = max_k_sum;

        /// maximum iteration till = n - k
        for (int i = 0; i <= n - k - 1; ++i)
        {
            /// delete the 'i-th' element and add 'k-th' element
            current_window_sum += arr[k + i] - arr[i];
            max_k_sum = max(max_k_sum, current_window_sum);
        }

        return max_k_sum;
    }

    /// Solution 2
    long maximumSumSubarray2(int k, vector<int> &arr, int n)
    {
        if (k > n || n == 0)
            return -1;

        long long max_k_sum = 0;
        for (int i = 0; i < k; ++i)
            max_k_sum += arr[i];

        long long current_window_sum = max_k_sum;

        for (int i = k; i < n; ++i)
        {
            current_window_sum += arr[i] - arr[i - k];
            max_k_sum = max(max_k_sum, current_window_sum);
        }

        return max_k_sum;
    }

    /// Solution 3
    long maximumSumSubarray3(int k, vector<int> &arr, int n)
    {
        if (k > n || n == 0)
            return -1;

        long long result = -1;
        long long current_sum = 0;

        int i = 0, j = 0;
        while (i < n && j < n)
        {
            if (j - i + 1 <= k)
            {
                current_sum += arr[j];
                if (j - i + 1 == k)
                    result = current_sum;
                ++j;
                continue;
            }

            current_sum += arr[j] - arr[i];
            result = max(result, current_sum);
            ++i, ++j;
        }

        return result;
    }

    long maximumSumSubarray4(int k, vector<int> &arr, int n)
    {
        int i = 0, j = 0;
        long long result = -1;
        long long current_sum = 0;

        while (i < n && j < n)
        {
            /// Pre-work: The work that is any condition agnostic
            current_sum += arr[j];

            /// work until window size matches
            if (j - i + 1 < k)
            {
                /// other work: if needed
                ++j;
                continue;
            }

            /// work exactly when window size matches for first time
            if (j - i + 1 == k)
            {
                result = current_sum;
                ++j;
                continue;
            }

            /// all other work below
            current_sum -= arr[i];
            result = max(result, current_sum);
            ++i, ++j;
        }

        return result;
    }

    long maximumSumSubarray5(int k, vector<int> &arr, int n)
    {
        int i = 0, j = 0;
        long long sum = 0;
        long long result = -1;

        while (i < n && j < n)
        {
            /// Condition agnostic work
            sum += arr[j];

            /// When window size matches
            if (j - i + 1 == k)
            {
                /// Work
                result = max(result, sum);

                /// increase 'i' pointer and delete the previous window element
                sum -= arr[i];
                ++i;
            }

            /// fast index pointer
            ++j;
        }

        return result;
    }

    /// MAIN TEMPLATE - Shrinkable
    long maximumSumSubarray(int k, vector<int> &arr, int n)
    {
        long long sum = 0, result = -1;

        for (int head = 0, tail = 0; head < n; ++head)
        {
            sum += arr[head];
            for (; head - tail + 1 > k; ++tail)
            {
                sum -= arr[tail];
            }

            result = max(result, sum);
        }

        return result;
    }
};

int main()
{
    vector<int> v{10, 4, 2, 5, 6, 3, 8, 1};
    cout << minimumSumOfK(v, 8, 3) << endl;

    return 0;
}