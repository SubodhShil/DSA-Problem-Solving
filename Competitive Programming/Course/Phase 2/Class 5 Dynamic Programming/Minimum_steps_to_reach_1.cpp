#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1e6;
int steps[N];
bool saved[N];

/// complexity: O(3^n)
/* int min_steps_recursive(int i)
{
    if (i == 1)
        return 0;

    int ans = min_steps_recursive(i - 1) + 1;
    if (i % 2 == 0)
        ans = min(min_steps_recursive(i / 2) + 1, ans);
    if (i % 3 == 0)
        ans = min(min_steps_recursive(i / 3) + 1, ans);

    return ans;
} */

int min_steps_dp_top_down(int i)
{
    if (i == 1)
        return 0;

    // don't do any work if already done calculated
    if (saved[i])
        return steps[i];

    /// do the recursive work if not yet calculated
    int ans = min_steps_dp_top_down(i - 1) + 1;
    if (i % 2 == 0)
        ans = min(min_steps_dp_top_down(i / 2) + 1, ans);
    if (i % 3 == 0)
        ans = min(min_steps_dp_top_down(i / 3) + 1, ans);

    steps[i] = ans, saved[i] = 1;
    return steps[i];
}

int min_steps_dp_bottom_up(int n)
{
    steps[1] = 0;

    for (int i = 2; i <= n; ++i)
    {
        int ans = steps[i - 1] + 1;

        if (i % 2 == 0)
            ans = min(ans, steps[i / 2] + 1);
        if (i % 3 == 0)
            ans = min(ans, steps[i / 3] + 1);
        steps[i] = ans;
    }

    return steps[n];
}

int32_t main()
{

    // cout << min_steps_recursive(30) << endl;
    cout << min_steps_dp_top_down(100000) << endl;
    cout << min_steps_dp_bottom_up(100000) << endl;

    return 0;
}