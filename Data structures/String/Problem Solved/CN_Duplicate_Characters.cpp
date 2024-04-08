/*
                            ॐ ॐ
    * https://www.codingninjas.com/studio/problems/duplicate-characters_3189116?leftPanelTabValue=PROBLEM
    * Author: Subodh Chandra Shil
    * Tag: String, Hashing
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

vector<pair<char, int>> duplicate_char(string s, int n)
{

    vector<int> occur(300, 0);
    vector<pair<char, int>> result;
    for (auto i : s)
        occur[i]++;

    // Follow up question 1: Are all the characters in uppercase?
    // Follow up question 2: Do I need to handle any special situation if the resulting vector is empty?

    for (int i = 0; i < 300; ++i)
    {
        char ch = (char)i;
        int freq = occur[i];
        if (freq > 1)
            result.push_back({ch, freq});
    }

    return result;
}
int main()
{

    return 0;
}