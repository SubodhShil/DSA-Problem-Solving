/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/codeforces-1312b
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void ans()
{
    cin >> n;
    int arr[n]{0};
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> ans;
    sort(arr, arr + n);
    for (auto i : arr)
        cout << i << " ";

    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}