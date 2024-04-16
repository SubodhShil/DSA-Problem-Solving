// https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)
#define int long long

void ans()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n); for(auto &i : v) cin >> i;
    int res = abs(v[n - 1] - x) * 2;

    for(int i = n - 1; i >= 1; --i) res = max(res, abs(v[i] - v[i - 1]));
    res = max(res, v[0]);
    cout << res << endl;
}

int32_t main()
{
    superfast
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}