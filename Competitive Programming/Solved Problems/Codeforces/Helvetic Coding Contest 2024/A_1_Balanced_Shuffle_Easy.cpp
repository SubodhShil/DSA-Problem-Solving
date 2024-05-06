/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://mirror.codeforces.com/contest/1970/problem/A1
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

bool cmp()
{
}

void ans()
{
    string s;
    cin >> s;

    // <balance, position, character>
    vector<pair<pair<int, int>, char>> mp(s.size());

    int cc = 0;
    mp[0].first.first = 0;
    mp[0].first.second = 1;
    mp[0].second = s[0];

    if (s[0] == '(')
    {
        mp[1].first.first = 1;
        mp[1].first.second = 2;
        mp[1].second = s[1];
    }
    else
    {
        mp[1].first.first = -1;
        mp[1].first.second = 0;
        mp[1].second = s[1];
    }

    for (int i = 2; i < s.length(); i++)
    {
        if (s[i - 1] == '(')
        {
            mp[i].first.first = mp[i - 1].first.first + 1;
        }
        else if (s[i - 1] == ')')
        {
            mp[i].first.first = mp[i - 1].first.first - 1;
        }
        mp[i].first.second = i + 1;
        mp[i].second = s[i];
    }

    sort(mp.begin(), mp.end(), cmp);

    for (int i = 0; i < mp.size(); i++)
    {
        cout << mp[i].first.first << " " << mp[i].first.second << ' ' << mp[i].second << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}
