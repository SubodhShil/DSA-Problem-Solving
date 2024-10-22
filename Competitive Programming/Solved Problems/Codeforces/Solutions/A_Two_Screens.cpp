/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/2025/problem/A
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void ans()
{
    string str1, str2;
    cin >> str1 >> str2;

    int n1 = str1.size(), n2 = str2.size();

    int i = 0;
    while (i < str1.size() and i < str2.size() and str1[i] == str2[i])
        ++i;

    cout << min(n1 + n2, n1 + n2 - i + 1) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}