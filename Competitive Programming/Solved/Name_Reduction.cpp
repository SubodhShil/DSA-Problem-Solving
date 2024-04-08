/*
                            ॐ ॐ

    * https://www.codechef.com/problems/NAME1?tab=statement
    * Author: Subodh Chandra Shil
    * Tag: String, Hashing
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
    string s1, s2, x, y;
    cin >> s1 >> s2;
    x = s1 + s2;

    unordered_map<char,int>ump;

    for(auto i : x) {
        ump[i]++;
    }

    int n;
    cin >> n;

    while(n--)
    {
        string p;
        cin >> p;
        y += p;
    }
    
    bool ok = 1;
    for(auto j : y) {
        if(ump[j] < 0 || !ump[j]) 
        {
            ok = 0;
            break;
        }
        ump[j]--;
    }

    if(ok) yes
    else no
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