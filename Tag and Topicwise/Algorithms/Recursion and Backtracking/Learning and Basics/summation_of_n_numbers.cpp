/**
 * @file        summation_of_n_numbers.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-25
 */

#include <bits/stdc++.h>
using namespace std;

/// Recurrence relation: Sum(N) = N + Sum(N - 1)
/// functional recursion

class Solution1
{
public:

};

class Solution2
{
public:
    /// implicit base case
    int summationOfN(int n)
    {
        if (n >= 1)
        {
            return n + summationOfN(n - 1);
        }

        return 0;
    }
};

class Solution3
{
public:
    /// parameterized recursion
    void summationOfN(int n, int sum = 0)
    {
        /// base case
        if (n < 1)
        {
            cout << sum << endl;
            return;
        }

        summationOfN(n - 1, sum + n);
    }
};

int main()
{
    Solution1 sol1;
    cout << sol1.summationOfN(6) << endl;

    Solution2 sol2;
    cout << sol2.summationOfN(6) << endl;

    Solution3 sol3;
    sol3.summationOfN(6, 0);

    return 0;
}