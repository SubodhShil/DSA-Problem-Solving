/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/subarray-sums-divisible-by-k/
    * Author: Subodh Chandra Shil
    * Tag: Prefix Sum

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

class Solution1
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size(), cnt = 0, sum = 0;
        unordered_map<int, int> remainderFreq;
        remainderFreq[0]++;

        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
            int rem = sum % k;
            if (rem < 0)
                rem += k;
            cnt += remainderFreq[rem];
            remainderFreq[rem]++;
        }

        return cnt;
    }
};

/*
    nums =         [4, 5, 0, -2, -3, 1], k = 5
    prfix =     0, [4, 9, 9,  7,  4, 5]
    map[prfix % k] = [0 -> 2, 4 -> 3]
*/

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size(), cnt = 0;
        vector<int> prefix(n + 1, 0);
        unordered_map<int, int> remainderFreq;
        for (int i = 0; i < n; ++i)
        {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        for (auto x : prefix)
        {
            int rem = x % k;
            if (rem < 0)
                rem += k;
            cnt += remainderFreq[rem];
            remainderFreq[rem]++;
        }

        return cnt;
    }
};

int32_t main()
{
    int t = 1;

    return 0;
}