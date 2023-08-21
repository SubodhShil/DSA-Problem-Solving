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
    int n;
    cin >> n;
    ll cnt_1 = 0, sum = 0;
    fori(n) {
        int x;
        cin >> x;
        sum += x;
        if(x == 1) ++cnt_1;
    }

    if(sum >= cnt_1 + n && n > 1) 
        cout <<"YES\n";
    else cout << "NO\n";
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