#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n; cin >> n;
    vector<int> v(n);
    fori(n) cin >> v[i];

    int sum = INT32_MAX;
    int i = 0, j = n - 1;
    for(int i =  0; i < n - 1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            sum = min(sum, v[i] + v[j] + j - i);
        }
    }

    cout << sum << endl;
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