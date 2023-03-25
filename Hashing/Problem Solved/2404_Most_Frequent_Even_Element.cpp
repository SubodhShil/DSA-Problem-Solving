/**
 * @brief
 * @author      Subodh Chandra Shil
 * @source      https://leetcode.com/problems/most-frequent-even-element/
 * @date        3/25/2023
 * @algorithm   hashing
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        int result = -1;

        /// @dev unordered_map has taken to reduce T.C from O(N) to O(1)
        unordered_map<int, int> hashing;
        for (auto i : nums)
            hashing[i]++;

        vector<pair<int, int>> temp;
        for (auto &it : hashing)
        {
            temp.push_back(make_pair(it.second, it.first));
        }

        /// we've to return the most frequent element
        sort(temp.begin(), temp.end(), greater<>());
        
        return result;
    }
};

int main()
{

    return 0;
}