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

const int N = 1e6 + 10;
int arr[N];

// TLE code
/* void ans1()
{
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                ++ans;
            else
                ans += 2;
        }
    }

    cout << ans << endl;
} */

void precompute()
{
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j += i)
        {
            arr[j]++;
        }
    }
}

int32_t main()
{
    int t;
    cin >> t;
    precompute();
    while (t--)
    {
        int x;
        cin >> x;
        cout << arr[x] << endl;
    }

    return 0;
}