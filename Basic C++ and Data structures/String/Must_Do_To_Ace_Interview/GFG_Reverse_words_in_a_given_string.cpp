/*
                            ॐ ॐ
    * https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?
    * Author: Subodh Chandra Shil
    * Tag: String
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    string reverseWords(string S)
    {
        vector<string> words;
        string result = "";
        string word = "";

        for (auto i : S)
        {
            if (i == '.')
            {
                words.push_back(word);
                word.clear();
            }
            else
                word += i;
        }

        words.push_back(word);

        reverse(words.begin(), words.end());

        // spoil given parameter value is a bad practice
        // S.clear();

        for (auto i : words)
        {
            result += i + '.';
        }
        result.pop_back();

        return result;
    }
};

// Optimized solution
class Solution2 
{
public:
    string reverseWords(string S)
    {
        string tempStr = "";
        string result = "";

        for (auto i : S)
        {
            tempStr += i;
            if (i == '.')
            {
                result = tempStr + result;
                tempStr.clear();
            }
        }
        result = tempStr + '.' + result;
        result.pop_back();

        return result;
    }
};
int main()
{

    return 0;
}