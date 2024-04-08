#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

string digitSumStr(string str) {
    int sum = 0;
    for(auto i : str) sum += (i - '0');

    return to_string(sum);
}

void ans()
{
    string strN;
    cin >> strN;
    int res = 0;

    while(strN.size() > 1) {
        strN = digitSumStr(strN);
        ++res;
    }

    cout << res << endl;
}

int main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}