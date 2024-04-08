/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/contest/1934/problem/B
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
    vector<int> coinsNeeded{0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};
    if (n <= 14)
        cout << coinsNeeded[n] << endl;
    else
    {
        int fifteenCoinNeed = n / 15;
        n %= 15;
        int res = fifteenCoinNeed + coinsNeeded[n];
        if (n >= 5)
            res = min(res, fifteenCoinNeed + 1 + coinsNeeded[n - 5]);
        cout << res << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}