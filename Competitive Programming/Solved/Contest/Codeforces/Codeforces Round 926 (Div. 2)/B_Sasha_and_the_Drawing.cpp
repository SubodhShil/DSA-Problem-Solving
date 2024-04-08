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
#define endl "\n"

void res()
{
    int n, k; cin >> n >> k;
    if(k & 1 || (4 * n - 2 == k)) cout << k / 2 + 1 << endl;
    else cout << k / 2 << endl;
}

int32_t main()
{
    superfast
    int t;
    cin >> t;
    while (t--)
    {
        res();
    }

    return 0;
}