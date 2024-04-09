/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

void ans()
{
    cin >> n;

    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int cnt = 0, res = 0;
    for (int i = 2; i <= 1000; ++i)
    {
        int tmpCnt = 0;
        for (auto x : v)
        {
            if (x % i == 0)
                ++tmpCnt;
        }

        if (tmpCnt >= cnt)
            res = i, cnt = tmpCnt;
    }

    cout << res << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}