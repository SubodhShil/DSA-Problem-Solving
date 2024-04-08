/*
 * link 1: https://leetcode.com/problems/pascals-triangle/
 * link 2: https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_1089580
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;

        for (int i = 0; i < numRows; i++)
        {
            vector<int> internalElements(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                internalElements[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(internalElements);
        }

        return result;
    }
};