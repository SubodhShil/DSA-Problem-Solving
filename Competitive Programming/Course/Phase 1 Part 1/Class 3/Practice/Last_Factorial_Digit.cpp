/*
                            ॐ JAY JAY SRI RAM ॐ

    * 
    * Author: Subodh Chandra Shil
    * Tag:
    *

                        ॐ Attachment to Detachment ॐ
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    cin >> n;
    if(n == 1) cout << 1 << endl;
    else if(n == 2) cout << 2 << endl;
    else if(n == 3) cout << 6 << endl;
    else if(n == 4) cout << 4 << endl;
    else cout << 0 << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}