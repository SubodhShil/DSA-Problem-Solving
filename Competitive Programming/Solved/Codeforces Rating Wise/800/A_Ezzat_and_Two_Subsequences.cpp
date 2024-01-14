/*
                            ॐ ॐ

    * https://codeforces.com/problemset/problem/1557/A
    * Author: Subodh Chandra Shil
    * Tag: Simple math
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
    vector<double> v(n, 0);
    fori(n) cin >> v[i];

    double maxEle = *max_element(v.begin(), v.end());
    double avg = accumulate(v.begin(), v.end(), 0.0) - maxEle;
    avg /= (n - 1);
    cout << fixed << setprecision(9) << maxEle + avg << endl;
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