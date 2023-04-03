/**
 * @file summation_of_n_numbers.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-02
 * @study_link: 
 *
 */
#include <bits/stdc++.h>
using namespace std;

/// functional recursion
int summationOfN(int n)
{
    if (n == 0)
        return 0;
}

/// parameterized recursion
int summationOfN(int n, int sum = 0)
{
    /// base case
    if (n < 1)
    {
    }

    summationOfN(n - 1, sum + n);
}

int main()
{
    // cout << summationOfN(5);

    return 0;
}