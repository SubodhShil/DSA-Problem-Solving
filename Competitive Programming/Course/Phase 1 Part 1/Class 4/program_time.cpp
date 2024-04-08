/*
                            ॐ JAY JAY SRI RAM ॐ

    * Calculating time taken by a program
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
    n = 1'000'000'000;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += 1LL * i * (n - i + 1);
    }

    cout << sum << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    clock_t s = clock();
    while (t--)
        ans();
    clock_t e = clock();

    cout << 1.0 * (e - s) / CLOCKS_PER_SEC << endl;
    cerr << "Time : " << 1.0 * ((double)clock()) / (double)CLOCKS_PER_SEC << "sec\n";

    return 0;
}