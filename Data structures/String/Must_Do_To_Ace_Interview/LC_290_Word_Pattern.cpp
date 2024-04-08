/*
                            ॐ ॐ
    * https://leetcode.com/problems/word-pattern/
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        map<string, char> strMap;
        map<char, string> charMap;

        /// seperating the words and collecting in a vector
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            words.push_back(word);
        }

        int n1 = pattern.size(), n2 = words.size();
        if (n1 != n2)
            return false;

        for (int i = 0; i < n1 && i < n2; ++i)
        {
            string str = words[i];
            char currentChar = pattern[i];

            if (strMap.count(str) && strMap[str] != currentChar)
                return false;

            if (charMap.count(currentChar) && charMap[currentChar] != str)
                return false;

            strMap[str] = currentChar;
            charMap[currentChar] = str;
        }

        return true;
    }
};

int main()
{

    return 0;
}