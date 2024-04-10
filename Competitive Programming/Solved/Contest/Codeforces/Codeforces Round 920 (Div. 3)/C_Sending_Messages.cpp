#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

#define endl "\n"

void ans()
{
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> v(n);
    fori(n) cin >> v[i];
    int prev = 0;

    for(int i = 0; i < n; ++i)
    {
        int processA = (v[i] - prev) * a;
        int processB = b;
        f -= min(processA, processB);
        if(f <= 0) {
            no
            return;
        }
        prev = v[i];
    }
    yes
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