#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

//  TLE
void ans1()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fori(n) cin >> v[i];

    ll maxVal = INT64_MIN;
    for(ll i = 0; i< n; ++i)
    {
        for(ll j = 0; j < n;++j)
        {
            if(i == j) continue;
            maxVal = max(maxVal, 1LL * v[i] * v[j]);
        }
    }

    cout << maxVal << endl;
}

void ans()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    fori(n) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    ll max1 = v[0] * 1LL * v[1];
    sort(v.begin(), v.end());
    ll max2 = v[0] * 1LL * v[1];
    cout << max(max1, max2) << endl;
}

int main()
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