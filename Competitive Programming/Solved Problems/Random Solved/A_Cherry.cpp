/*
                            ॐ ॐ

    * https://codeforces.com/problemset/problem/1554/A
    * Author: Subodh Chandra Shil
    * Tag: Observation
    * ACCEPTED

                            ॐ ॐ
*/

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
    ll arr[n];
    ll result = INT32_MIN;
    fori(n) cin >> arr[i];
    for(int i = 0; i < n - 1; ++i)
        result = max(result, arr[i] * arr[i + 1]);

    cout << result << endl;
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