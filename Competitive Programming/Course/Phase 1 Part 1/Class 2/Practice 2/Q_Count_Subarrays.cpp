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
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;

    int cnt = 0;

    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            int ok = 1;
            for(int k = i; k <= j; ++k)
            {
                if(i-1 >= 0 && v[k-1] >= v[k]) {
                    ok = 0;
                    break;
                }
            }
            if(ok) ++cnt;
        }
    }

    cout << cnt << endl;
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