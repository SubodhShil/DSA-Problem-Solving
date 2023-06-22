/**
 * @file factorial_pre_compute.cpp
 * @author Subodh Chandra Shil
 * @date 2023-04-11
 */

/*
    Given 'T' test cases and in each test cases given a number 'N'.
    Generate factorial of 'N' in each test case and print N % M where M = 10^9 + 7.

    Constraints
    1 <= T <= 10^5
    1 <= N <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int fact[N];

void preComputeFactorial()
{
    fact[0] = fact[1] = 1;

    /// pre compute all factorial till 10^5
    for (int i = 2; i <= N; i++)
    {
        fact[i] = i * fact[i - 1];
    }
}

int main()
{
    preComputeFactorial();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }

    return 0;
}