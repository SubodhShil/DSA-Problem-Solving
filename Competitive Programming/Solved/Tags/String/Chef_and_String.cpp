/*
                            ॐ ॐ
    * https://www.codechef.com/problems/RECNDSTR
    * Author: Subodh Chandra Shil
    * Tag: String
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

string leftShift(string str) {
    string newStr = str;
    char firstChar = str[0];
    newStr.erase(0, 1);
    newStr += firstChar;
    return newStr;
}

string rightShift(string str) {
    string newStr = str;
    char lastChar = str[str.size() - 1];
    newStr.erase(str.size() - 1, 1);
    newStr = lastChar + newStr;
    return newStr;
}

void ans()
{
    string str;
    cin >> str;
    if(leftShift(str) == rightShift(str)) cout << "YES\n";
    else cout << "NO\n";
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