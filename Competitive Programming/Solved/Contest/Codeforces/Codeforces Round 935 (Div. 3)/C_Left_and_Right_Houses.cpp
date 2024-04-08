/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1945/problem/C
    * Author: Subodh Chandra Shil
    * Tag: Prefix sum

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    cin >> n;
    vector<int> prefix(n + 1, 0);
    string str;
    cin >> str;

    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = ((str[i] - '0') + prefix[i]);
    }

    int ans = -1;
    for (int i = 0; i <= n; ++i)
    {
        int left = i - prefix[i], right = prefix[n] - prefix[i];

        if (2 * left >= i and 2 * right >= n - i)
        {
            if (ans == -1 || abs(n - 2 * i) < abs(n - 2 * ans))
                ans = i;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}