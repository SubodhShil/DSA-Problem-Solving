#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> elementStore;

        for (int i = 0; i < n; ++i)
        {
            int remain = target - nums[i];
            if (elementStore.find(remain) != elementStore.end())
                return {i, elementStore[remain]};
            else
                elementStore[nums[i]] = i;
        }

        return {-1, -1};
    }
};

int main()
{

    return 0;
}