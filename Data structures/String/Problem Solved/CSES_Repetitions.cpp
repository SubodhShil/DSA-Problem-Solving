/*
                            ॐ ॐ
    * https://cses.fi/problemset/task/1069
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

#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans1()
{
    string str;
    cin >> str;
    int longest = 1, cnt = 1;
    for(int i = 1; i < str.size(); ++i)
    {
        if(str[i] != str[i - 1])
            cnt = 0;

        ++cnt;
        longest = max(longest, cnt);
    }
    cout << longest << endl;
}

void ans2() 
{
    string str;
    cin >> str;
    int longest = 1, cnt = 1;
    for(int i = 0; i < str.size() - 1; ++i)
    {
        if(str[i] == str[i + 1])
            ++cnt;
        else cnt = 1;
        longest = max(longest, cnt);
    }

    cout << longest << endl;
}

int main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans1();
        // ans2();
    }

    return 0;
}