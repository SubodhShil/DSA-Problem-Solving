#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int memo[N];

int power_of_two(int n)
{
    /// 2^0 = 1
    if (n == 0)
        return 1;

    return power_of_two(n - 1) + power_of_two(n - 1);
}

int power_of_two_memo(int n)
{
    /// 2^0 = 1
    if (n == 0)
        return 1;

    if (memo[n] != -1)
        return memo[n];

    return memo[n] = power_of_two_memo(n - 1) + power_of_two_memo(n - 1);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i)
        memo[i] = -1;

    // cout << power_of_two(n) << endl;
    cout << power_of_two_memo(n) << endl;

    return 0;
}