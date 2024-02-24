#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

#define int long long
#define endl "\n"

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;

    int ans = -1e18, sum = -1e18;

    for(auto i : v){
        sum = max(i, sum + i);
        ans = max(ans, sum);
    }

    cout << ans << endl;
}

int32_t main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}