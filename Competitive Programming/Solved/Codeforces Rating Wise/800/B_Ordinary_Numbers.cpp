
/*
                            ॐ ॐ

    * https://codeforces.com/contest/1520/problem/B
    * Author: Subodh Chandra Shil
    * Tag: Math
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

#define endl "\n"

bool isAllSame(int n) {
    string str = to_string(n);
    char prev = str[0];
    for(auto i : str) {
        if(i != prev) return false;
        prev = i;
    }

    return true;
}

/// TLE
void ansTLE()
{
    int n;
    cin >> n;

    // make similar all the digits
    while(!isAllSame(n)) {
        --n;
    }

    string str = to_string(n);
    int size = str.size();
    int result = (size - 1) * 9 + (str[0] - '0');
    cout << result << endl;
}

void ans() {
    int n, result = 0;
    cin >> n;

    for(ll i = 1; i <= n; i = (i * 10) + 1)
        for(ll j = 1; j <= 9; ++j)
            if(i * j <= n) ++result;
        
    cout << result << endl;
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