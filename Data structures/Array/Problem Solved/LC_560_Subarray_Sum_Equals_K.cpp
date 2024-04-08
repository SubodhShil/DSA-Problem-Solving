/**
 * @file            LC_560_Subarray_Sum_Equals_K.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-29
 * @resources:      https://youtu.be/20v8zSo2v18
 *                  https://leetcode.com/problems/subarray-sum-equals-k/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int subarraySum(vector<int> &a, int k)
    {
        int ans = 0;
        int sum = 0;

        unordered_map<int, int> mp;
        mp[0] = 1;

        for (int i = 0; i < a.size(); ++i)
        {
            sum += a[i];
            int remain = sum - k;

            /// check if find 'remain'
            ans += mp[remain];
            mp[sum]++;
        }

        return ans;
    }
};

int main()
{
    // vector<int> v{1, 2, 3};
    // vector<int> v{3, 4, 5, 1, 6};
    // vector<int> v{1, 1, 1, 4, 6, 7, 3};
    vector<int> v{-3, 1, 3, -5};

    Solution sol1;
    cout << sol1.subarraySum(v, -2);

    return 0;
}

/*
                                    Similar Questions to this question in leetcode
                                    ----------------------------------------------

    1.  Maximum Size Subarray Sum Equals k
    2.  Subarray Product Less Than K
    3.  Count Number of Nice Subarrays
    4.  Continuous Subarray Sum
    5.  Find Two Non-overlapping Sub-arrays Each With Target Sum
    6.  Subarrays with K Different Integers
    7.  Binary Subarrays With Sum
    8.  Number of Submatrices That Sum to Target
    9.  Maximum Sum of Two Non-Overlapping Subarrays
    10. Minimum Size Subarray Sum.
*/