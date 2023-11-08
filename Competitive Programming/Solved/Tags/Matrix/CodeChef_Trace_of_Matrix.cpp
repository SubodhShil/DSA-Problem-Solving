/*
                            ॐ ॐ
    * https://www.codechef.com/problems/TRACE?tab=statement
    * Author: Subodh Chandra Shil
    * Tag: Matrix
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
    int arr[n][n];
    for(int i = 0; i < n; ++i)
        for(int j = 0;j < n;++j) cin >> arr[i][j];

    int res = 0;
    for(int i = 0; i < n ;++i)
    {
        for(int j = 0; j < n; ++j)
        {
            int diagonalSum = 0;
            int x = i, y = j;
            while(x < n and y < n) {
                diagonalSum += arr[x][y];
                res = max(res, diagonalSum);
                ++x, ++y;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    superfast
    int t = 1;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}