/*
                            ॐ ॐ
    * https://leetcode.com/problems/ransom-note/
    * Author: Subodh Chandra Shil
    * Tag: String, hashing
    * ACCEPTED
                            ॐ ॐ
*/


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char, int> characterStore;
        for (auto i : ransomNote)
        {
            characterStore[i]++;
        }

        for (auto i : magazine)
        {
            if (characterStore.count(i))
            {
                characterStore[i]--;
            }
        }

        for (auto i : characterStore)
        {
            if (i.second >= 1)
                return false;
        }

        return true;
    }
};

int main()
{

    return 0;
}