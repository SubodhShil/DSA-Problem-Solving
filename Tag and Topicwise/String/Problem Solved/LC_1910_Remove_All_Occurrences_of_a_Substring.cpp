/**
 * @file                LC_1910_Remove_All_Occurrences_of_a_Substring.cpp
 * @author              Subodh Chandra Shil
 * @date                2023-04-26
 * @resources:          https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.find(part) < s.size())
            s.erase(s.find(part), part.length());

        return s;
    }
};

int main()
{

    return 0;
}