/*
                            ॐ ॐ
    * Author: Subodh Chandra Shil
    * Tag: String, adhoc
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

void ans()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char minChar = *min_element(s.begin(), s.end());
    s = minChar + s;
    int lastPosMinChar = s.find_last_of(minChar);
    s.erase(lastPosMinChar, 1);
    cout << s << endl;
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