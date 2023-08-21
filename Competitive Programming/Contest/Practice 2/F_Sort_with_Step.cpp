#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x, y) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n, k, cnt = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; ++i)
    {
        int x; 
        cin >> x;
        if(abs(x - i) % k)
            ++cnt;
    }

    if(cnt > 2)
        cout << -1 << endl;
    else if(cnt == 2)
        cout << 1 << endl;
    else cout << 0 << endl;
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