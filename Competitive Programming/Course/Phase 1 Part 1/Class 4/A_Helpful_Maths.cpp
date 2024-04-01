/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/problemset/problem/339/A
    * Author: Subodh Chandra Shil
    * Tag: Ad hoc
                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    string str, num;
    cin >> str;

    int cntPlus = 0;
    for (auto i : str)
    {
        if (i != '+')
            num += i;
        else
            ++cntPlus;
    }

    sort(num.begin(), num.end());
    for (auto i : num)
    {
        cout << i;
        if (cntPlus)
        {
            cout << "+";
            --cntPlus;
        }
    }
}

int32_t main()
{
    int t = 1;
    while (t--)
        ans();

    return 0;
}