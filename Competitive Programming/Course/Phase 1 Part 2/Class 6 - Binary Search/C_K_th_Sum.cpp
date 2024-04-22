/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/edu/course/2/lesson/6/5/practice/contest/285084/problem/C
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m;

const int N = 1e5 + 10;
int a[N], b[N];

void ans()
{
    cin >> n >> k;

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n);
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}