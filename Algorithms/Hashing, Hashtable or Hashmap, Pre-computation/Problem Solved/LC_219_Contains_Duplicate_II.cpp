/*
                            ॐ ॐ
    * https://leetcode.com/problems/contains-duplicate-ii/
    * Author: Subodh Chandra Shil
    * Tag: Array, Hashmap
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate1(vector<int> &nums, int k)
    {
        int n = nums.size();
        int i = 0;
        unordered_map<int, int> lastOccurrence;

        while (i < n)
        {
            int element = nums[i];
            if (lastOccurrence.count(nums[i]) && abs(lastOccurrence[element] - i) <= k)
                return true;

            lastOccurrence[element] = i;
            ++i;
        }

        return false;
    }

    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> lastOccurrence;

        for (int i = 0; i < nums.size(); ++i)
        {
            int element = nums[i];
            if (lastOccurrence.count(element) && abs(lastOccurrence[element] - i) <= k)
                return true;

            lastOccurrence[element] = i;
        }

        return false;
    }
};

int main()
{

    return 0;
}