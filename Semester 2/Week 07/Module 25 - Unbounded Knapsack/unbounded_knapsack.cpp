#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int unbound_knapsack(int n, int s, int val[], int w[])
{
    if (n == 0 || s == 0)
        return 0;

    if (dp[n][s] != -1)
        return dp[n][s];

    if (s >= w[n - 1])
    {
        int choice1 = unbound_knapsack(n, s - w[n - 1], val, w) + val[n - 1];
        int choice2 = unbound_knapsack(n - 1, s, val, w);

        return dp[n][s] = max(choice1, choice2);
    }
    else
        return dp[n][s] = unbound_knapsack(n - 1, s, val, w);
}

int main()
{
    int n, s;
    cin >> n >> s;

    memset(dp, -1, sizeof(dp));

    int value[n], weight[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> value[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> weight[i];
    }

    cout << unbound_knapsack(n, s, value, weight) << endl;

    return 0;
}

/*

----------
Testcase 1
----------
Input:
4 6
5 3 2 4
4 1 3 2
Output:
18
 */