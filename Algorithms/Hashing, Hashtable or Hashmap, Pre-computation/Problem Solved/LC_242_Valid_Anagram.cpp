/**
 * @file        LC_242_Valid_Anagram.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-26
 * @resources:  https://leetcode.com/problems/valid-anagram/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        map<int, int> mps, mpt;
        for (auto i : s)
            mps[i]++;

        for (auto i : t)
            mpt[i]++;

        for (int i = 0; i < mps.size(); ++i)
        {
            if (mps[i] != mpt[i])
                return false;
        }

        return true;
    }
};

int main()
{

    return 0;
}