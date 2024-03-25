/*
                            ॐ JAY JAY SRI RAM ॐ

    *
    * Author: Subodh Chandra Shil
    * Tag:
    ! UNSOLVED

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
int n, k;

const int MOD = 1000000007;

int maxSubarraySum(vector<int> &arr, int n)
{
    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum = (sum % MOD + arr[i] % MOD) % MOD;

        if (sum < 0)
            sum = 0;

        else
            maxSum = max(maxSum, sum);
    }

    return maxSum < 0 ? 0 : maxSum;
}

void solve()
{
    cin >> n >> k;

    vector<int> v(n, 0);
    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        arrSum = (arrSum % MOD + v[i] % MOD) % MOD;
    }

    int maxSubSum = maxSubarraySum(v, n);
    // GP
    int power = pow(2, k) - 1;
    int GPSum = ((maxSubSum % MOD) * (power % MOD)) % MOD;

    int res = ((GPSum % MOD + arrSum % MOD) % MOD);
    if (res < 0)
        res += MOD;

    cout << res << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}