/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
    * Author: Subodh Chandra Shil
    * Tag: String, Sliding Window
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

/* Anagram: A string with any rearrangement of letter but the quantity of characters should be same */

class Solution1
{
public:
    int search(string pat, string txt)
    {
        int windowSize = pat.size();
        int n = txt.size();
        int i = 0, j = 0;

        unordered_map<char, int> mp;
        for (auto k : pat)
            mp[k]++;

        int count = mp.size();
        int anagramCnt = 0;

        while (j < n)
        {
            mp[txt[j]]--;
            if (mp[txt[j]] == 0)
                --count;

            if (j - i + 1 == windowSize)
            {
                if (count == 0)
                    ++anagramCnt;

                mp[txt[i]]++;
                if (mp[txt[i]] == 1)
                    ++count;
                ++i;
            }

            ++j;
        }

        return anagramCnt;
    }
};

class Solution2
{
public:
    int search(string pat, string txt)
    {
        int n = pat.size(), m = txt.size();
        int k = n;

        /// hash array
        vector<int> store(26);
        for (auto i : pat)
            store[i - 'a']++;

        int i = 0, j = 0;
        int anagramCnt = 0;

        while (j < m)
        {
            store[txt[j] - 'a']--;

            if (j - i + 1 == k)
            {
                bool flag = true;

                /// if all are zero then count up
                for (auto i : store)
                {
                    if (i != 0)
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag)
                    ++anagramCnt;

                store[txt[i] - 'a']++;
                ++i;
            }

            ++j;
        }

        return anagramCnt;
    }
};

int main()
{

    return 0;
}