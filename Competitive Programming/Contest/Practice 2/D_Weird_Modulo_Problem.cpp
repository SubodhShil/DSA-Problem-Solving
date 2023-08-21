#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x,y) for( int i = x; i < y; i++)
#define forj(x) for( int j = 0; j < x; j++)



#define forIt(v) for(auto it = v.begin(); it != v.end(); ++it)
#define forx(v) for(auto x : v)

void ans()
{
    int n;
    cin >> n;
    vector<int> v;
    fori(0, n)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    ll ans = v[0];
    for(int i = 1; i < v.size(); ++i)
    {
        ans = (ans % v[i]);
    }

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