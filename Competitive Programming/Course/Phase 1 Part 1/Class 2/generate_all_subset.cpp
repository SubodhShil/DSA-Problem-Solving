#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

#define endl "\n"

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;

    for(int mask = 0; mask < (1 << n); ++mask) {
        for(int i = 0; i < n; ++i)
        {
            if((mask >> i) & 1) { // if ith bit is on in mask or not
                cout << v[i] << ' ';
            }
        }
        cout << endl;
    }
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