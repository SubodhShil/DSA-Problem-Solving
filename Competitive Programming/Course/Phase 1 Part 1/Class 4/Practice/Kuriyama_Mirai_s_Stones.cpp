/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://codeforces.com/problemset/problem/433/B
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

void ans()
{
    cin >> n;
    vector<int> a(n, 0);
    for (auto &i : a)
        cin >> i;

    vector<int> b = a;
    sort(b.begin(), b.end());

    vector<int> prefix1(n + 1, 0), prefix2(n + 1, 0);
    partial_sum(a.begin(), a.end(), prefix1.begin() + 1);
    partial_sum(b.begin(), b.end(), prefix2.begin() + 1);

    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1) {
            cout << prefix1[c] - prefix1[b - 1] << endl;
        }
        else {
            cout << prefix2[c] - prefix2[b - 1] << endl;
        }
    }
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        ans();

    return 0;
}