#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"yes"<<endl;}
#define no {cout<<"no"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

int n, m;
char vStr[200][200];

bool isCoordinateValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j <= m - 1);
}

bool isXPresent(int i, int j) {
    if(isCoordinateValid(i,j) && vStr[i][j] != 'x') return false;
    return true;
}

void ans()
{
    cin >> n >> m;
    fori(n) {
        forj(m) {
            cin >> vStr[i][j];
        }
    }

    int i, j; cin >> i >> j;
    --i, --j;

    if(!isXPresent(i, j-1) || !isXPresent(i, j+1) || !isXPresent(i+1, j) || !isXPresent(i+1, j - 1) || !isXPresent(i+1, j + 1) || !isXPresent(i-1, j) || !isXPresent(i - 1, j - 1) || !isXPresent(i - 1, j + 1)) {
        cout << "no\n";
        return;
    }

    cout << "yes\n";
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