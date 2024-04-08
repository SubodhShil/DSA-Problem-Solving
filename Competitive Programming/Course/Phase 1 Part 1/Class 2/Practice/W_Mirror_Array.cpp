/*
                            ॐ ॐ

    * Author: Subodh Chandra Shil
    * Tag: 2D array
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
#define int long long

void ans()
{
    int n, m;
    cin >> n >> m;
    int twoD[n][m];
    int twoD_2[n][m];

    fori(n) {
        forj(m) {
            int x;
            cin >> x;
            twoD[i][j] = x;
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j1 = 0, j2 = m - 1; j1 < j2; ++j1, --j2)
        {
            swap(twoD[i][j1], twoD[i][j2]);
        }
    }

    fori(n) {
        forj(m) {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}