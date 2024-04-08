/*
                            ॐ ॐ
    * https://www.codechef.com/problems/PCJ18B?
    * Author: Subodh Chandra Shil
    * Tag: Math, Ad Hoc, Impelmentation
    * ACCEPTED
                            ॐ ॐ
*/

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// Follow up: How many squares in a (n x n) chessboard
/// https://youtu.be/RuG1-8f7Dgk?si=GSEAhmae1TglbnZy
// "odd side length" refers to squares that have an odd number of cells on each side.

#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    ll sum = 0;
    while(n > 0)
    {
        sum += (n * n);
        n -= 2;
    }
    cout << sum << endl;
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