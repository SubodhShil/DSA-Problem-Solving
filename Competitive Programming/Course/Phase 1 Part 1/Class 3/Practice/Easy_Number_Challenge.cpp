/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag:
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int MOD = 1073741824;
const int N = 1000010;
int arr[1000010]{0};

void precompute()
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N; j += i)
        {
            arr[j]++;
        }
    }
}

void ans()
{
    int a, b, c, sum = 0;
    cin >> a >> b >> c;

    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            for (int k = 1; k <= c; ++k)
            {
                int x = i * j * k;
                sum = ((sum % MOD + arr[x] % MOD) % MOD);
            }
        }
    }
    cout << sum << endl;
}

int32_t main()
{
    precompute();
    int t = 1;
    while (t--)
        ans();

    return 0;
}