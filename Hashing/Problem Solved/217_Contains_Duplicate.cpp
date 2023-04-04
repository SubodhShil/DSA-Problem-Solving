/**
 * @file 217_Contains_Duplicate.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-04
 * @link: https://leetcode.com/problems/contains-duplicate/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> numberFrequencies;
        for (int i : nums)
            numberFrequencies[i]++;

        for (auto i : numberFrequencies)
        {
            if (i.second >= 2)
                return true;
        }

        return false;
    }
};

int main()
{
    // vector<int> v{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    vector<int> v{1, 2, 3, 4};
    Solution sol;
    cout << sol.containsDuplicate(v) << endl;

    return 0;
}