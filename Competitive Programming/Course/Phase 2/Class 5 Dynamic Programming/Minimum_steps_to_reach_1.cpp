#include <bits/stdc++.h>
using namespace std;

const int N = 5000;
int precal[N];
bool saved[N];

/// complexity: O(3^n)
int min_steps_recursive(int i)
{
    if (i == 1)
        return 0;

    int ans = min_steps_recursive(i - 1) + 1;
    if (i % 2 == 0)
        ans = min(min_steps_recursive(i / 2) + 1, ans);
    if (i % 3 == 0)
        ans = min(min_steps_recursive(i / 3) + 1, ans);

    return ans;
}

int min_steps_dp(int i)
{
    if (i == 1)
        return 0;

    // don't do any work if already done calculated
    if (saved[i])
        return precal[i];

    /// do the recursive work if not yet calculated
    int ans = min_steps_dp(i - 1) + 1;
    if (i % 2 == 0)
        ans = min(min_steps_dp(i / 2) + 1, ans);
    if (i % 3 == 0)
        ans = min(min_steps_dp(i / 3) + 1, ans);

    precal[i] = ans;
    return precal[i];
}

int main()
{
    cout << min_steps_recursive(30) << endl;
    cout << min_steps_dp(1000) << endl;

    return 0;
}