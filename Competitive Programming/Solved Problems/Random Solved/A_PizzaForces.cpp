// https://codeforces.com/problemset/problem/1555/A

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}


void ans()
{
    ll n;
    cin >> n;
    if(n < 6) n = 6;
    if(n & 1) ++n;
    cout << (n / 2) * 5 << endl;
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