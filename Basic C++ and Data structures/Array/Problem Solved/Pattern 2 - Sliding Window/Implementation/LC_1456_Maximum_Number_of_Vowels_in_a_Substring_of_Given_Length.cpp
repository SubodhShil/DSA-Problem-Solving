/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag: Sliding windows
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isVowel(char ch)
    {
        string vowel = "aeiou";
        return vowel.find(ch) != string::npos;
    }

    int maxVowels(string s, int k)
    {
        int n = s.size(), r = 0, l = 0, res = 0, current_cnt = 0;
        for (; r < n; ++r)
        {
            for (; r - l + 1 > k;)
            {
                res = max(res, current_cnt);
                if (isVowel(s[l]))
                    --current_cnt;
                ++l;
            }
            if (isVowel(s[r]))
                ++current_cnt;
        }

        res = max(res, current_cnt);

        return res;
    }
};

int32_t main()
{

    return 0;
}