/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://cses.fi/problemset/task/1650
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> prefix_xor(vector<int> arr, int n)
{
    vector<int> xorArr(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        xorArr[i + 1] = xorArr[i] ^ arr[i];
    }

    return xorArr;
}

int32_t main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> xorArr = prefix_xor(arr, n);

    /* for (int i = 1; i <= n; ++i)
        cout << xorArr[i] << " ";
    cout << endl; */

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << (xorArr[b] ^ xorArr[a - 1]) << endl;
    }

    return 0;
}