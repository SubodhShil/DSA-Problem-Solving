/*
                            ॐ ॐ
    * 
    * Author: Subodh Chandra Shil
    * Tag: String, Adhoc
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
    int n, res;
    cin >> n;
    string fullString = "";
    map<char,int> ump, cmp;
    cmp = {
        {'c', 2}, 
        {'d', 1}, 
        {'e', 2},
        {'f', 1},
        {'o', 1},
        {'h', 1}
    };

    while(n--)
    {
        string str;
        cin >> str;
        fullString += str;
    }

    for(auto i : fullString) ump[i]++;

    res = min({ump['c'] / cmp['c'], ump['d']/cmp['d'], ump['e']/cmp['e'], ump['f']/cmp['f'], ump['o']/cmp['o'], ump['h']/cmp['h']});

    cout << res << endl;
}

void ans2() {
    cout << min({10});
}

int main()
{
    superfast
    int t;
    cin >> t;
    while (t--)
    {
        ans();
        // ans2();
    }

    return 0;
}