/**
 * @file        1_PepCoding_Max_Consecutive_Ones_II.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-04-22
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{

    /*
        1. You are given an array(arr) which contains only 0's and 1's and a number K.
        2. You have to find the maximum number of consecutive 1's in the given array if you can flip at most K zeroes.
    */

public:
    int findMaxConsecutiveOnes(vector<int> &nums, int k)
    {
        int n = nums.size();
        int i = 0;

        /// compare between max size of subarrays
        int maxSubArraySize = 0;
        /// track if 'k' number of zeros surpassed
        int track = 0;
        /// track when you got the first 0 in the subarray
        int firstZero = -1;
        /// track size of subarray consists of 'k' zeros
        int subArraySize = 0;

        while (i < n)
        {
            if (nums[i] == 0)
            {
                ++track;
                if (firstZero == -1)
                    firstZero = i;
            }

            if (track <= k)
            {
                ++subArraySize;
                ++i;
            }
            else if (track > k)
            {
                maxSubArraySize = max(maxSubArraySize, subArraySize);
                /// running the loop afterward the index where first 0 was encountered
                i = firstZero + 1;
                firstZero = -1;
                subArraySize = 0;
                track = 0;
            }
        }

        /// check the last subarray
        maxSubArraySize = max(maxSubArraySize, subArraySize);

        return maxSubArraySize;
    }
};

class Solution2
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums, int k)
    {
        int j = -1;
        int count = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
                ++count;

            while (count > k)
            {
                ++j;
                if (nums[j] == 0)
                    --count;
            }

            int len = i - j;
            ans = max(len, ans);
        }

        return ans;
    }
};

int main()
{
    // vector<int> v{1, 1, 0, 0, 1, 1};
    // vector<int> v{1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1};
    // vector<int> v{0, 1, 1, 1, 0, 1, 0};
    // vector<int> v{1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1};
    vector<int> v{0, 0, 0, 1, 1, 0, 1};

    Solution1 sol1;
    cout << sol1.findMaxConsecutiveOnes(v, 3);

    cout << endl;

    Solution2 sol2;
    cout << sol2.findMaxConsecutiveOnes(v, 3);

    return 0;
}