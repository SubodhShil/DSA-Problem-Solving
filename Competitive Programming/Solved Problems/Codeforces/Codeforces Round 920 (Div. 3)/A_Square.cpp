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
    vector<int> arr1, arr2;
    fori(4)
    {
        int x, y;
        cin >> x >> y;
        arr1.push_back(x);
        arr2.push_back(y);
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    cout << (arr1[3] - arr1[0]) * (arr2[3] - arr2[0]) << endl;
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