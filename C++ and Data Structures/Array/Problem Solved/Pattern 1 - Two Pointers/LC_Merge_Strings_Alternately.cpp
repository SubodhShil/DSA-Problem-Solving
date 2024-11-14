/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/merge-strings-alternately/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class Solution1
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string result = "";
        int i = 0;
        while (i < word1.length() || i < word2.length())
        {
            if (i < word1.length())
            {
                result += word1[i];
            }
            if (i < word2.length())
            {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};

class Solution2
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string result = "";
        int n1 = word1.size(), n2 = word2.size();

        int i = 0;
        while (i < n1 and i < n2)
        {
            result += word1[i];
            result += word2[i];
            ++i;
        }

        for (int x = i; x < n1; ++x)
        {
            result += word1[x];
        }

        for (int y = i; y < n2; ++y)
        {
            result += word2[y];
        }

        return result;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}