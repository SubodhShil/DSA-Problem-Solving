/*
                            ॐ ॐ
    * https://www.codechef.com/problems/AVGPERM?
    * Author: Subodh Chandra Shil
    * Tag: Math, Ad Hoc
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
    cout << n - 1  << " " << n - 2 << ' ';
    for(int i = 1; i <= n - 3; ++i)
        cout << i << ' ';
    cout << n << endl;
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