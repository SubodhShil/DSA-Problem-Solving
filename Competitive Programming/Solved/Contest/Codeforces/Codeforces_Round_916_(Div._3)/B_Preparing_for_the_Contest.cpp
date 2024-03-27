#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 1; i <= x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n, k;
    cin >> n >> k;
    if(k == 0) 
    {
        for(int i = n; i >= 1; --i) cout << i << " ";
    }
    else 
    {
        int till = n - k;
        for(int i = till; i >= 1; --i) cout << i << ' ';
        for(int i = till + 1; i <= n; ++i) cout << i << ' ';
    }
    cout << endl;
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