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

void ans()
{
    int n, cntOdd = 0;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) {
        cin >> i;
        if(i & 1) ++cntOdd;
    }

    if(cntOdd % 2 == 0) yes
    else no
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