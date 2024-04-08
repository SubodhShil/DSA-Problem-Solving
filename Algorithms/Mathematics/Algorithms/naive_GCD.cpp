#include <bits/stdc++.h>
using namespace std;

/// Time Complexity: O(min(a, b))
/// TLE
int naive_GCD(int a, int b)
{
    int result_gcd = INT32_MIN;
    for (int i = 1; i <= min(a, b); ++i)
    {
        if (a % i == 0 && b % i == 0)
            result_gcd = max(result_gcd, i);
    }

    return result_gcd;
}

int euclids_GCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return euclids_GCD(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    return 0;
}