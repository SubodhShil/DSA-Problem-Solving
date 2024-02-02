#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

void ans()
{
    ll x, totalSum = 0, sum2power = 0;
    cin >> x;
    totalSum = x * (x + 1) / 2;

    for(ll i = 1; i <= x; i *= 2)
        sum2power += i;

    cout << (totalSum - sum2power * 2) << endl;
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