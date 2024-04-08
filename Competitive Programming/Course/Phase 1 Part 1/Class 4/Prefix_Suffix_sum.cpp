/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil
    * Tag: Prefix and Suffix sum algorithm

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int N = 1e5 + 10;
int arr[N]{0};

void prefix_sum()
{
    int prefix_arr[n + 1]{0};

    prefix_arr[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        prefix_arr[i + 1] = prefix_arr[i] + arr[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << prefix_arr[i] << " ";
    }

    cout << endl;
}

void suffix_sum()
{
    int suffix_arr[n + 1]{0};

    suffix_arr[0] = 0;
    for (int i = n - 1, j = 1; i >= 0; --i, ++j)
    {
        suffix_arr[j] = suffix_arr[j - 1] + arr[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << suffix_arr[i] << ' ';
    }

    cout << endl;
}

int32_t main()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    prefix_sum();
    suffix_sum();

    return 0;
}