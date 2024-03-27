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
    int cnt = 0;
    char arr[6];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];

    int i = 0, j = 1,k = 2;
    while (k <= 5){
        if(arr[i] == 'W' && arr[j] == 'W' && arr[k] == 'W')
        {
            cout << "YES\n";
            return;
        }
        ++i, ++j, ++k;
    }

    cout << "NO\n";
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