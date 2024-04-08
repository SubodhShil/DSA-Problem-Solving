/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.codechef.com/problems/BINPARITY
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

void ans()
{
    cin >> n;
    string binaryNum = bitset<32>(n).to_string();
    int sum = 0;
    for (auto x : binaryNum)
        sum += x - '0';

    if (sum % 2 == 0)
        cout << "EVEN\n";
    else
        cout << "ODD\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        ans();

    return 0;
}