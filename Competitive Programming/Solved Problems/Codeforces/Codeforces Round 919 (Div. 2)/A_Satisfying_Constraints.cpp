#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( ll i = 0; i < x; i++)
#define forj(x) for( ll j = 0; j < x; j++)

void ans()
{
    ll n;
    cin >> n;
    vector<ll> ignored;
    ll start = INT32_MIN, end = INT32_MAX;

    while(n--)
    {
        ll a, b;
        cin >> a >> b;
        if(a == 1)
            start = max(start, b);
        else if(a == 2)
            end = min(end, b);
        else
            ignored.push_back(b);
    }
    
    if(start > end) 
    {
        cout << 0 << endl;
        return;
    }

    ll ans = end - start + 1;
    for(auto i : ignored)
        if(i >= start && i <= end) --ans;

    // cout << start << " " << end << endl;
    cout << ans << endl;
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