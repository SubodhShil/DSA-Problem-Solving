
/*
                            ॐ ॐ
    * https://leetcode.com/problems/first-unique-character-in-a-string/
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
    int firstUniqChar(string s)
    {
        unordered_map<char, int> characterFrequency;
        for (auto i : s)
        {
            characterFrequency[i]++;
        }

        for (int i = 0; i < s.size(); ++i)
        {
            if (characterFrequency[s[i]] == 1)
                return i;
        }

        return -1;
    }
};

int main()
{

    return 0;
}