/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag: Math
    *

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;

const int N = 1e7 + 10;
int arr[N];

void precompute()
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N; j += i)
        {
            arr[j]++;
        }
    }
}

void ans()
{
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += (i * arr[i]);
    }
    cout << sum << endl;
}

int32_t main()
{
    int t = 1;
    precompute();

    while (t--)
        ans();

    return 0;
}