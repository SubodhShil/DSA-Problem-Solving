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

void ans()
{
    int n; cin >> n;
    vector<int> v(n);

    int maxE = INT32_MIN, minE = INT32_MAX;
    int maxi = 0, mini = 0;
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        if(v[i] > maxE) {
            maxi = i;
            maxE = v[i];
        }
        if(v[i] < minE) {
            mini = i;
            minE = v[i];
        }
    }

    swap(v[maxi], v[mini]);

    for(auto i : v) cout << i << " ";
    cout << endl;
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