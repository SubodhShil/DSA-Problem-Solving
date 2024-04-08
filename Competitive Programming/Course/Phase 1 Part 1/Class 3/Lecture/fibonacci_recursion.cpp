#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int memo[N];

/* Time complexity: O(2^n) */
int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int fibo_memo(int n)
{
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    return memo[n] = fibo_memo(n - 1) + fibo_memo(n - 2);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; ++i)
        memo[i] = -1;

    cout << fibo(n) << endl;
    cout << fibo_memo(n) << endl;

    return 0;
}