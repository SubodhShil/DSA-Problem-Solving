/* Solved */

#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 1; j < x; j++)

void ans()
{
    int n;
    cin >> n;
    int arr[n];
    arr[0] = 1, arr[1] = 3, arr[2] = 7;
   
    for(int i = 3; i<n;++i) {
        arr[i] = arr[i - 1] + 1;
    }

    fori(n) cout << arr[i] << ' ';
    cout << endl;
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