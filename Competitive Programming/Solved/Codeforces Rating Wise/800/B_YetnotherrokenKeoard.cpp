
/*
                            ॐ ॐ

    * https://codeforces.com/contest/1907/problem/B
    * Author: Subodh Chandra Shil
    * Tag: Implementation, String
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
    string str, ans;
    cin >> str;
    int n = str.size(), b = 0, B = 0;
    for(int i = n - 1;i >= 0; --i)
    {
        if(str[i] == 'b') ++b;
        else if(str[i] == 'B') ++B;
        else {
            if(str[i] >= 'a' && str[i] <= 'z' && b) --b;
            else if(str[i] >= 'A' && str[i] <= 'Z' && B) --B;
            else ans.push_back(str[i]);
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
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