/**
 * @file 169_Majority_Element.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-04
 * @link: https://leetcode.com/problems/majority-element/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int pre_calculation = INT32_MIN;
        int major_element = 0;
        map<int, int> elementsFrequency;
        for (int i : nums)
            elementsFrequency[i]++;

        for (auto it = elementsFrequency.begin(); it != elementsFrequency.end(); it++)
        {
            if (it->second > pre_calculation)
            {
                pre_calculation = it->second;
                major_element = it->first;
            }
        }

        return major_element;
    }
};

int main()
{
    Solution result;
    vector<int> v{2, 2, 1, 1, 1, 2, 2, 7, 7, 7, 7, 7};
    // vector<int> v{3, 3, 2, 3, 5, 27, 5, 5, 5, 3, 3};
    cout << result.majorityElement(v);

    return 0;
}