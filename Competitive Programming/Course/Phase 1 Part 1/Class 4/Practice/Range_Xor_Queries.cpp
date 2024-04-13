/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/cses-1650
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e6 + 10;
int n;
int prefix[N];
int arr[N];

void precompute()
{
    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] ^ arr[i];
    }
}

void ans()
{
    int x;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    precompute();

    while (x--)
    {
        int a, b;
        cin >> a >> b;
        cout << (prefix[b] ^ prefix[a - 1]) << endl;
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