/**
 * @file        Y_Range_sum_query.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-08
 * @resources:  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
 */

#include <bits/stdc++.h>
using namespace std;

/// bruteforce solution
class Solution1
{
public:
    void rangeSumQuery()
    {
        int n, q;
        cin >> n >> q;

        vector<long long> arr(n, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            long long sum = 0;

            --l, --r;
            for (int i = l; i <= r; ++i)
            {
                sum += arr[i];
            }

            cout << sum << endl;
        }
    }
};

class Solution2
{
public:
    void rangeSumQuery()
    {
        int n, q;
        cin >> n >> q;

        vector<long long> arr(n, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        /// prefix sum pre-calculation
        for (int i = 1; i < n; ++i)
        {
            arr[i] = arr[i - 1] + arr[i];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            --l, --r;
            long long sum = arr[r] - (l == 0 ? 0 : arr[l - 1]);
            cout << sum << endl;
        }
    }
};

int main()
{
    Solution1 sol1;
    // sol1.rangeSumQuery();

    Solution2 sol2;
    sol2.rangeSumQuery();

    return 0;
}