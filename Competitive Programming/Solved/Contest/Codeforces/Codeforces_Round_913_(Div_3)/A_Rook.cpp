/*
                            ॐ ॐ

    * https://codeforces.com/contest/1907/problem/A
    * Author: Subodh Chandra Shil
    * Tag: implementation
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
    char a, b;
    cin >> a >> b;

    for(char i = '1'; i <= '8'; ++i) if(i != b) cout << a << i << endl;
    for(char i = 'a'; i <= 'h'; ++i) if(i != a) cout << i << b << endl;
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