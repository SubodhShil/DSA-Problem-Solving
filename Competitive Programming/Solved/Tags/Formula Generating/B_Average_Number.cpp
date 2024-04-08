/*
                            ॐ ॐ
    * https://www.codechef.com/problems/AVG?
    * Author: Subodh Chandra Shil
    * Tag: Formula generating, Math
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define yes                    \
    {                          \
        cout << "YES" << endl; \
    }
#define no                    \
    {                         \
        cout << "NO" << endl; \
    }

/// for loops
#define fori(x) for (int i = 0; i < x; i++)
#define forj(x) for (int j = 0; j < x; j++)

#define endl "\n"

void ans()
{
    int n, k, v;
    cin >> n >> k >> v;
    ll sum = 0;
    fori(n)
    {
        int x;
        cin >> x;
        sum += x;
    }

    ll totalSum = v * 1LL * (n + k);
    ll kSum = totalSum - sum;
    (kSum > 0 && kSum % k == 0) ? cout << kSum / k << endl : cout << -1 << endl;
}

int main()
{
    superfast int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}