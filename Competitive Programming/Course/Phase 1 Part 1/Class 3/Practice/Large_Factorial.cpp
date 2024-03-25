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

const int N = 1010;
const int MOD = 1000000007;
int arr[N]{1};

void preCompute()
{
    for (int i = 1; i <= N; ++i)
    {
        arr[i] = ((i % MOD) * (arr[i - 1] % MOD)) % MOD;
    }
}

void ans()
{
    int n;
    cin >> n;
    cout << arr[n] << endl;
}

int32_t main()
{
    preCompute();
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}