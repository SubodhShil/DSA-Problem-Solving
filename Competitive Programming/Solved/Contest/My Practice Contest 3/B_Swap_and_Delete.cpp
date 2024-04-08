/*
                            ॐ ॐ

    * 
    * Author: Subodh Chandra Shil
    * Tag: 
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
    string str; cin >> str; 
    string temp;
    int cntZero = 0, cntOne = 0;
    int n = str.size();

    for(auto i : str) 
    {
        if(i == '0') ++cntZero;
        if(i == '1') ++cntOne;
    }
    
    for(auto i : str) 
    {
        if(!cntOne) {
            while(cntZero--) temp += '0';
            break;
        }

        if(!cntZero) {
            while(cntOne--) temp += '1';
            break;
        }

        if(i == '0') temp += '1', --cntOne;
        if(i == '1') temp += '0', --cntZero;
    }

    int operation = 0;
    int i = 0, j = 0;
    while(i < n && j < n)
    {
        if(str[i] != temp[j]) ++i;
        else ++operation;
        ++j;
    }

    cout << operation << endl;
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