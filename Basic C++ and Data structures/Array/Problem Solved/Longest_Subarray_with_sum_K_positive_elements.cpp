/**
 * @file            Longest_Subarray_with_sum_K_positive_elements.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-27
 * @resources:      https://youtu.be/frf7qxiN2qU
 */

#include <bits/stdc++.h>
using namespace std;

/// subarray is a contiguous part of an array

/// Bruteforce solution
class Solution1
{
public:
    int longestSubArraySumK(vector<int> &v, int k)
    {
        int n = v.size();

        /// generating subarrays
        int maxSize = 0;
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                sum += v[j];

                if (sum == k)
                {
                    int newSize = j - i + 1;
                    maxSize = max(newSize, maxSize);
                }
            }

            sum = 0;
        }

        return maxSize;
    }
};

class Solution2
{
    /// @resource: https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399
    /// this solution is better but not optimal for elements abovemention question
    /// in the abovemention question the array only contains 0 and positive elements
    /// but in case of question that requires all the elements like positive, negative and zero
    /// then this soultion is optimal. One of the solution is as follow:
    /// https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_5713505?leftPanelTab=0
public:
    int longestSubarrayWithSumK(vector<int> a, long long k)
    {
        map<long long, int> preSumMap;
        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < a.size(); ++i)
        {
            sum += a[i];

            /// check if the first element is equal to
            /// target 'k' element
            if (sum == k)
            {
                maxLen = max(maxLen, i + 1);
            }

            long long rem = sum - k;
            if (preSumMap.find(rem) != preSumMap.end())
            {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            /// storing the sum and last elements index of sum
            /// to handle zeros: if the sum already available in the hash
            /// the condition checks if sum is not found in the hash, then
            /// execute the codes in the if conditional block
            if (preSumMap.find(sum) != preSumMap.end())
            {
                preSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};

/// Optimal solution
class Solution3
{
public:
    int longestSubarrayWithSumK(vector<int> a, long long k)
    {
        int left = 0, right = 0;
        long long sum = a[0];
        int maxLen = 0;
        int size = a.size();

        while (right < size)
        {
            /// sum is greater than 'k' then substract from left move the left pointer
            while (left <= right && sum > k)
            {
                sum -= a[left];
                ++left;
            }

            if (sum == k)
            {
                maxLen = max(maxLen, right - left + 1);
            }

            ++right;
            if (right < size)
                sum += a[right];
        }

        return maxLen;
    }
};

int main()
{
    vector<int> v{1, 2, 3, 1, 1, 1, 4, 2, 3};

    Solution1 sol1;
    cout << sol1.longestSubArraySumK(v, 6);

    return 0;
}
