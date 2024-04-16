/**
 * @file LC_567_Permutation_in_String.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-26
 */

#include <bits/stdc++.h>
using namespace std;

/// Bruteforce solution
/// end up with TLE, but good to start in interview as bruteforce
class Solution1
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int s1Size = s1.length();
        sort(begin(s1), end(s1));

        for (int i = 0; i < s2.length(); ++i)
        {
            string substring = s2.substr(i, s1Size);
            sort(begin(substring), end(substring));

            if (substring == s1)
                return true;
        }

        return false;
    }
};

class Solution2
{
private:
    bool checkEqual(int a[26], int b[26])
    {
        for (int i = 0; i < 26; ++i)
        {
            if (a[i] != b[i])
                return 0;
        }

        return 1;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        int count1[26] = {0};
        for (int i = 0; i < s1.length(); ++i)
        {
            count1[s1[i] - 'a']++;
        }

        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        while (i < windowSize && i < s2.length())
        {
            count2[s2[i] - 'a']++;
            ++i;
        }

        if (checkEqual(count1, count2))
        {
            return 1;
        }

        while (i < s2.length())
        {
            /// adding occurrences of new character
            char newChar = s2[i];
            count2[newChar - 'a']++;

            /// eliminate old character occurrence
            char oldChar = s2[i - windowSize];
            count2[oldChar - 'a']--;
            ++i;

            if (checkEqual(count1, count2))
            {
                return 1;
            }
        }

        return 0;
    }
};

int main()
{
    Solution2 sol2;
    string s1 = "ab", s2 = "abc";
    cout << sol2.checkInclusion(s1, s2);

    return 0;
}