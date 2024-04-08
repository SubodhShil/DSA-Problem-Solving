#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int iterateArray(vector<int> &nums, int i, int j, int element1, int element2)
    {
        int cnt = 0;
        for (; i <= j; ++i)
        {
            if (nums[i] == element1 or nums[i] == element2)
                ++cnt;
        }

        return cnt;
    }

    int findLHS(vector<int> &nums)
    {
        map<int, pair<int, int>> store;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (store.count(nums[i]) == 0)
                store[nums[i]].first = i, store[nums[i]].second = i;
            else if (store.count(nums[i]))
                store[nums[i]].second = i;
        }

        int res = 0;
        for (auto entry : store)
        {
            // cout << entry.first << ' ' << entry.second.first << " " << entry.second.second << endl;

            int nextElement = entry.first + 1;
            if (store.count(nextElement))
            {
                auto &pair = store[nextElement];
                int i = min(entry.second.first, pair.first), j = max(entry.second.second, pair.second);
                int calculateSize = iterateArray(nums, i, j, nextElement, entry.first);
                res = max(res, calculateSize);
            }
        }

        return res;
    }
};

int main()
{

    return 0;
}