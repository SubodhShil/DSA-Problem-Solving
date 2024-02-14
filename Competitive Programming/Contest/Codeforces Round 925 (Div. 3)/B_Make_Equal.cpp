#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 1; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n; cin >> n;
    vector<int> v(n), prefixSum(n);
    for(auto &i : v) cin >> i;

    prefixSum[0] = v[0];
    for(int i = 1; i < n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    // sort(v.begin(), v.end());

    for(auto i : prefixSum) cout << i << " ";
}

int main()
{
    superfast
    int t = 1;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}