/**
 * @file        GFG_Last_index_of_One.cpp
 * @author      Subodh Chandra Shil
 * @link        https://practice.geeksforgeeks.org/problems/last-index-of-15847/1?
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastIndex(string s)
    {
        char findTarget = '1';
        int lastPos = -1;

        int start = 0, end = s.size() - 1;
        while (start <= end)
        {
            if (s[start] == findTarget)
                lastPos = start;
            ++start;
        }

        return lastPos;
    }
};

int main()
{

    return 0;
}