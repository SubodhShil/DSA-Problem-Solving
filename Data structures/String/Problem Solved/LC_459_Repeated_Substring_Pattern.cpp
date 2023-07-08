/**
 * @file            LC_459_Repeated_Substring_Pattern.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://leetcode.com/problems/repeated-substring-pattern/
 *                  https://youtu.be/OkHFO_uDdhU
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();

        for (int i = n / 2; i >= 1; --i)
        {
            if ((n % i == 0) && s.substr(i) == s.substr(0, n - i))
                return 1;
        }

        return 0;
    }
};

int main()
{
    // string s = "ababab";
    string s = "abcabcabc";

    Solution sol1;
    cout << sol1.repeatedSubstringPattern(s);

    return 0;
}