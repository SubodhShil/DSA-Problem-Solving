/**
 * @file        4_alternate_numbers.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-05-30
 */

/// You're given an array of unequal number of negative and positive digits. Without altering the relative order of positive and negative numbers you must return an array of alternative positive and negative values

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> positives, negatives;
        vector<int> result;

        for (auto i : nums)
        {
            if (i > 0)
                positives.push_back(i);
            else
                negatives.push_back(i);
        }

        if (positives.size() > negatives.size())
        {
            for (int k = 0; k < negatives.size(); ++k)
            {
                result[k * 2] = positives[k];
                result[k * 2 + 1] = negatives[k];
            }

            int result_size = negatives.size() * 2;

            for (int k = negatives.size(); k < positives.size(); ++k)
            {
                result[result_size++] = positives[k];
            }
        }
        else
        {
            for (int k = 0; k < positives.size(); ++k)
            {
                result[k * 2] = positives[k];
                result[k * 2 + 1] = negatives[k];
            }

            int result_size = positives.size() * 2;

            for (int k = positives.size(); k < negatives.size(); ++k)
            {
                result[result_size++] = negatives[k];
            }
        }

        return result;
    }
};

int main()
{
    vector<int> v{-1, 2, 3, 4, -3, 1};
    Solution sol;
    vector<int> ans = sol.rearrangeArray(v);

    for (auto i : ans)
        cout << i << ' ';

    return 0;
}