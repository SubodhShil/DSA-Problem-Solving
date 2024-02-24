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

int32_t main()
{
    superfast

    int t;
    cin >> t;

    for(int i = 1; i <= t; ++i)
    {
        int p, s, r; cin >> p >> s >> r;
        cout << "Case " << i << ": ";

        if((p-s) == 0 && r > 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}