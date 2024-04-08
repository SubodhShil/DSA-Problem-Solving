
/*
                            ॐ ॐ

    * https://codeforces.com/contest/1538/problem/A
    * Author: Subodh Chandra Shil
    * Tag: Array, Ad hoc
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
    vector<int> arr(n, 0);
    fori(n) cin >> arr[i];
    int maxElementIdx = max_element(arr.begin(), arr.end()) - arr.begin();
    int minElementIdx = min_element(arr.begin(), arr.end()) - arr.begin();

    int leftSide = max(maxElementIdx,  minElementIdx) + 1;
    int rightSide = n - min(maxElementIdx, minElementIdx);
    int bothSide = min(maxElementIdx + 1, minElementIdx + 1) + min(n - minElementIdx, n - maxElementIdx);

    // cout << leftSide << ' ' << rightSide << " " << bothSide << endl;
    cout << min({leftSide, rightSide, bothSide}) << endl;
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