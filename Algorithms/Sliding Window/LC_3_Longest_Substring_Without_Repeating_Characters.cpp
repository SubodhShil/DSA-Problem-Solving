#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int l = 0, r = 0, n = s.size(), res = 0;
        unordered_map<char, int> ump;

        for (; r < n; ++r)
        {
            ump[s[r]]++;
            for (; ump[s[r]] > 1; ++l)
            {
                ump[s[l]]--;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};

int main()
{

    return 0;
}