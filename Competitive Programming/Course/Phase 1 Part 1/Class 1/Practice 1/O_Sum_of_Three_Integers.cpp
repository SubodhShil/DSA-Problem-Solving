#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

void ans()
{
    ll k, s, res = 0;
    cin >> k >> s;
    for(ll x = 0; x <= k; ++x)
    {
        for(ll y = 0; y <= k; ++y)
        {
            ll z = s - (x + y);
            if(z >= 0 && z <= k) ++res;
        }
    }

    cout << res << endl;
}

int main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}