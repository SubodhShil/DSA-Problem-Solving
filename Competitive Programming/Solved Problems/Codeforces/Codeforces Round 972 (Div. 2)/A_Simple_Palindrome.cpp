/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/2005/problem/A
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void ans()
{
    cin >> n;
    string vowels = "aeiou", res = "";

    for (int i = 0; i < n; ++i)
    {
        res.push_back(vowels[i % 5]);
    }

    sort(res.begin(), res.end());
    cout << res << endl;
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