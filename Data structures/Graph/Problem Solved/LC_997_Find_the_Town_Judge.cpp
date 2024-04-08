/**
 * @file            LC_997_Find_the_Town_Judge.cpp
 * @author          Subodh Chandra Shil
 * @link:           https://leetcode.com/problems/find-the-town-judge/description/
 */

#include <bits/stdc++.h>
using namespace std;

/* Non-graph approach */
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        vector<int> trustCount(n + 1, 0);

        for (auto i : trust)
        {
            trustCount[i[0]]--;
            trustCount[i[1]]++;
        }

        for (int i = 1; i <= n; ++i)
        {
            if (trustCount[i] == n - 1)
                return i;
        }

        return -1;
    }
};

int main()
{

    return 0;
}