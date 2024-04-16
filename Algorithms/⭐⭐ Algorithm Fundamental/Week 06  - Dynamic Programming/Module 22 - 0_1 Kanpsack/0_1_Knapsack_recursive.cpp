#include <bits/stdc++.h>
using namespace std;

/* With the recursive solution the time complexity is O(2^n) */

int knapsack(int n, int capacity, int v[], int w[])
{
    /// base case
    if (n == 0 || capacity == 0)
        return 0;

    if (w[n - 1] <= capacity)
    {
        int op1 = knapsack(n - 1, capacity - w[n - 1], v, w) + v[n - 1];
        int op2 = knapsack(n - 1, capacity, v, w);

        return max(op1, op2);
    }

    else
    {
        return knapsack(n - 1, capacity, v, w);
    }
}

int main()
{
    int n;
    cin >> n;
    int v[n], w[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> w[i];
    }

    int capacity;
    cin >> capacity;

    cout << knapsack(n, capacity, v, w) << endl;
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