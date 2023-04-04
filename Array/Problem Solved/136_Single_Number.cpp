//* link: https://leetcode.com/problems/single-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;

        map<int, int> countDigitOccurances;
        for (int i : nums)
            countDigitOccurances[i]++;
        for (auto i : countDigitOccurances)
            if (i.second == 1)
                result = i.first;

        return result;
    }
};

int main()
{
    Solution result;
    vector<int> nums = {1};
    cout << result.singleNumber(nums);

    return 0;
}