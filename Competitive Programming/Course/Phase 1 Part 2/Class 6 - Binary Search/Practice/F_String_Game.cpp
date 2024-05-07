/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m;

const int N = 2e5 + 9;
string t, p;
int a[N];

bool is_subsequence(string s, string p)
{
    int n = s.length(), m = p.length(), i = 0, j = 0;
    for (; i < n and j < m; ++i)
        if (s[i] == p[j])
            ++j;
    return j >= m;
}

bool ok(int id)
{
    vector<bool> alive(n, true);
    for (int i = 0; i < id; ++i)
        alive[a[i]] = false;

    string s = "";
    for (int i = 0; i < n; ++i)
    {
        if (alive[i])
            s += t[i];
    }

    return is_subsequence(s, p);
}

void ans()
{
    cin >> t >> p;
    n = t.size();

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        --a[i];
    }

    int l = 1, r = n, ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}