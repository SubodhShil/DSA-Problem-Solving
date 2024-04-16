// https://codeforces.com/problemset/problem/1878/C

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
    int n, k, x; cin >> n >> k >> x;
    int minSum = (k * (k + 1) )/ 2;
    int sumTillN = (n * (n + 1)) / 2;
    int p = n - k;
    int maxSum = sumTillN - ((p * (p + 1)) / 2);

    if(x >= minSum && x <= maxSum) yes
    else no 
}

int32_t main()
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