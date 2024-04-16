/*
                            ॐ ॐ

    * https://www.codechef.com/problems/HOTEL
    * Author: Subodh Chandra Shil
    * Tag: Ad Hoc, Implementation
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
    int v1[n], v2[n];
    fori(n) cin >> v1[i];
    fori(n) cin >> v2[i];

    unordered_map<int, int> mp;
    int result = INT32_MIN;

    for(int i = 0; i < n; ++i)
    {
        for(int j = v1[i]; j < v2[i]; ++j) 
        {
            mp[j]++;
            result = max(result, mp[j]);
        }
    }

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