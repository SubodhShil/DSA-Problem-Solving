#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}
#define int long long

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

// TLE
void ans1()
{
    int n; cin >> n; 
    vector<int> v(n, 0); for(auto &i : v) cin >> i;

    int res = v[0];
    for (int i = 1; i < n; ++i)
    {
        int x = 1;
        if (v[i - 1] >= v[i])
        {
            for (int j = 2; v[i - 1] >= x; ++j)
            {
                x = v[i] * j;
            }
            v[i] = x;
        }
        res = max(res, v[i]);
    }

    cout << res << endl;
}

void ans() {
    int n; cin >> n; 
    vector<int> v(n); for(auto &i : v) cin >> i;

    int res = 0;
    for(auto &i : v) {
        res = res / i + 1;
        res *= i;
    }
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