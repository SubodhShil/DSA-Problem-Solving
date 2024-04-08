/**
 * @file        J_Count_Letters.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-07
 * @resource:   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int ch[26]{0};

    for (int i = 0; i < s.size(); ++i)
    {
        ch[int(s[i]) - 97]++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (ch[i] > 0)
        {
            cout << char(i + 97) << " : " << ch[i] << endl;
        }
    }

    return 0;
}