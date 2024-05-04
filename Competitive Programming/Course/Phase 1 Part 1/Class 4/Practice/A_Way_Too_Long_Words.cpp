/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/problemset/problem/71/A
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
    string str;
    cin >> str;
    int n = str.size();
    if (n > 10)
    {
        cout << str[0] << n - 2 << str[n - 1] << endl;
    }
    else
        cout << str << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}