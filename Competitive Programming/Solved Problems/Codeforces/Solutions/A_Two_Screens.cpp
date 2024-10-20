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
    int res = 0;

    for (int i = 0; i < min(n1, n2); ++i)
    {
        if (str1[i] == str2[i])
            ++res;
        else
        {
            res += 2;
            if (i != 0 and str1[i - 1] == str2[i - 1])
                ++res;
        }
    }

    if (n1 != n2)
    {
        res += abs(n1 - n2) + 1;
    }

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