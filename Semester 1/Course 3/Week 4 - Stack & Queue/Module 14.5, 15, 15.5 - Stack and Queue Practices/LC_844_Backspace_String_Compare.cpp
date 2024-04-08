/**
 * @file        LC_844_Backspace_String_Compare.cpp
 * @author      Subodh Chandra Shil
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> charSt1, charSt2;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '#' && !charSt1.empty())
                charSt1.pop();
            else if (s[i] != '#')
                charSt1.push(s[i]);
        }

        for (int i = 0; i < t.size(); ++i)
        {
            if (t[i] == '#' && !charSt2.empty())
                charSt2.pop();
            else if (t[i] != '#')
                charSt2.push(t[i]);
        }

        return (charSt1 == charSt2);
    }
};

int main()
{

    return 0;
}