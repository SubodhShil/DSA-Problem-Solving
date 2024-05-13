/*
                            ॐ JAY JAY SRI RAM ॐ

    * Fibonacci with DP
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const long long N = 105;
int f[N];
bool visited[N];

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;

    /// check if already visited
    if (visited[n])
        return f[n];

    /// if not visited then just do computation in the array
    f[n] = f[n - 1] + f[n - 2];
    visited[n] = true;
    return f[n];
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cout << fibo(a) << endl;
    }

    return 0;
}