/*
                            ॐ ॐ

    * https://codeforces.com/problemset/problem/1916/B
    * Author: Subodh Chandra Shil
    * Tag: Math, Grid
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

inline int read()
{
	int num=0,flag=1;
	char c=getchar();
	for (;c<'0'||c>'9';c=getchar())
	if (c=='-') flag=-1;
	for (;c>='0'&&c<='9';c=getchar())
	num=(num<<3)+(num<<1)+c-48;
	return num*flag;
}

void ans()
{
    int i1, j1, i2, j2, i3, j3;
    cin >> i1 >> j1 >> i2 >> j2 >> i3 >> j3;
    int res = abs(i1 - i2) + abs(j1 - j2);

    if((i1 == i2 && i1 == i3)) {
        if((j3 > j1 && j3 < j2) or (j3 < j1 && j3 > j2)) res += 2;
    } 

    else if(j1 == j2 && j1 == j3) {
        if((i3 > i1 && i3 < i2) or (i3 < i1 && i3 > i2)) res += 2;
    }

    cout << res << endl;
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