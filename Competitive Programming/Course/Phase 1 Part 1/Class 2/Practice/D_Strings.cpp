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

    cout << str1.size() << ' ' << str2.size() << endl;  
    cout << str1 << str2 << endl;
    swap(str1[0], str2[0]);
    cout << str1 << ' ' << str2 << endl;
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