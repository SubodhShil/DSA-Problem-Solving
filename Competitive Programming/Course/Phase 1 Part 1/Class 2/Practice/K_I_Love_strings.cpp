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
    string str1, str2;
    cin >> str1 >> str2;

    int n1 = str1.size(), n2 = str2.size();
    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        cout << str1[i] << str2[i];
        ++i, ++j;
    }

    while(i < n1) cout << str1[i++];
    while(j < n2) cout << str2[j++];
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