#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

/* Time complexity: O(item_size * capacity) */
int knapsack(int n, int capacity, int v[], int w[])
{
    /// base case
    if (n == 0 || capacity == 0)
        return 0;

    if (dp[n][capacity] != -1)
        return dp[n][capacity];

    /// We have two choices if the capacity is greater than or
    /// eqaul to the current item weight
    if (capacity >= w[n - 1])
    {
        int choice1 = knapsack(n - 1, capacity - w[n - 1], v, w) + v[n - 1];
        int choice2 = knapsack(n - 1, capacity, v, w);

        return dp[n][capacity] = max(choice1, choice2);
    }
    else
    {
        return dp[n][capacity] = knapsack(n - 1, capacity, v, w);
    }
}

int main()
{
    int n;
    cin >> n;
    int values[n], weight[n];
    for (int i = 0; i < n; ++i)
        cin >> values[i];

    for (int i = 0; i < n; ++i)
        cin >> weight[i];

    int weightLimit;
    cin >> weightLimit;

    /// initializing dp array
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= weightLimit; ++j)
            dp[i][j] = -1;

    cout << knapsack(n, weightLimit, values, weight);

    return 0;
}

/*
--------
Testcase
--------
Input:
4
1 5 3 2
5 2 4 3
7
Output:
8
 */