/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1968/problem/B
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

bool isSubsequence(const std::string &s, const std::string &t)
{
    int i = 0, j = 0;
    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            ++i;
        }
        ++j;
    }
    return i == s.length();
}

/// TLE
void ansTLE()
{
    cin >> n >> m;

    string str1, str2;
    cin >> str1 >> str2;
    int res = 0;

    string tmp = "";

    for (int i = 0; i <= str1.size(); ++i)
    {
        tmp += str1[i];
        if (isSubsequence(tmp, str2))
        {
            res = max(res, i + 1);
        }
        else
            break;
    }

    cout << res << endl;
}

void ansTLE2()
{
    cin >> n >> m;
    string str1, str2;
    cin >> str1 >> str2;

    int zeroCnt = min(count(str1.begin(), str1.end(), '0'), count(str2.begin(), str2.end(), '0'));
    int oneCnt = min(count(str1.begin(), str1.end(), '1'), count(str2.begin(), str2.end(), '1'));

    string tmp = "";
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        tmp += str1[i];

        if (count(tmp.begin(), tmp.end(), '0') <= zeroCnt and count(tmp.begin(), tmp.end(), '1') <= oneCnt)
        {
            if (isSubsequence(tmp, str2))
                res = max(res, i + 1);
        }
        else
            break;
    }
    cout << res << endl;
}

void ans()
{
    cin >> n >> m;
    string str1, str2;
    cin >> str1 >> str2;

    int i = 0;
    for (int j = 0; i < n && j < m; ++j)
    {
        if (str1[i] == str2[j])
            ++i;
    }

    cout << i << endl;
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