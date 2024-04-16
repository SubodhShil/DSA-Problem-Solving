/*
                            ॐ ॐ
    * https://cses.fi/problemset/task/1068/
    * Author: Subodh Chandra Shil
    * Tag: Implementation
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    ll n;
    cin >> n;
    while(n != 1)    
    {
        cout << n << ' ';
        if(n & 1) n = n * 3 + 1;
        else n = n / 2;
    }
    cout << 1 << endl;
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