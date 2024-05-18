/**
 * @file            1_CN_Maximum_Consecutive_Ones.cpp
 * @author          Subodh Chandra Shil
 * @date            2023-04-21
 * @resource:       https://www.codingninjas.com/codestudio/problems/maximum-consecutive-ones_3843993
 *                  https://leetcode.com/problems/max-consecutive-ones/description/
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution 1
class Solution1
{
public:
    int consecutiveOnes(vector<int> &arr)
    {
        int n = arr.size();
        int countOnes = 0;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 1)
            {
                int count = 1;
                for (int j = i + 1; j < n; ++j)
                {
                    if (arr[j] == 1)
                        ++count;
                    else
                        break;
                }

                countOnes = max(countOnes, count);
            }
        }

        return countOnes;
    }
};

class Solution2
{
public:
    int consecutiveOnes(vector<int> &arr)
    {
        int n = arr.size();
        int maxConsecutiveOnes = 0;
        int consecutiveCount = 0;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 1)
                ++consecutiveCount;
            else
            {
                maxConsecutiveOnes = max(consecutiveCount, maxConsecutiveOnes);
                consecutiveCount = 0;
            }
        }
        maxConsecutiveOnes = max(consecutiveCount, maxConsecutiveOnes);

        return maxConsecutiveOnes;
    }
};

int main()
{
    // vector<int> v{0, 1, 1, 0, 0, 1, 1, 1};
    vector<int> v{1, 1, 1, 1, 0, 0};

    Solution1 sol1;
    // cout << sol1.consecutiveOnes(v);

    Solution2 sol2;
    cout << sol2.consecutiveOnes(v);

    return 0;
}