/// link: https://leetcode.com/problems/unique-number-of-occurrences/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {

        map<int, int> mp;
        set<int> takeUniqueValue;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for (auto &[first, second] : mp)
        {
            takeUniqueValue.insert(second);
        }

        return (mp.size() == takeUniqueValue.size()) ? true : false;
    }
};

int main()
{
    vector<int> v{1, 2, 2, 2, 1, 1, 3};
    Solution op;
    cout << op.uniqueOccurrences(v);

    return 0;
}