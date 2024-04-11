/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/atcoder-abc121_d
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

int find_xor(int x)
{
    int ans = 0;
    while (x >= 0 and x % 4 != 3)
    {
        ans ^= x;
        --x;
    }

    return ans;

    int ans = 0;
}

void ans()
{
    int a, b;
    cin >> a >> b;

    cout << (find_xor(b) ^ (a > 0 ? find_xor(a - 1) : 0)) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}