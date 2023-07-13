#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    int reverseNumber(int n, int rev = 0)
    {
        if (n == 0)
            return rev;

        rev = rev * 10 + n % 10;
        return reverseNumber(n / 10, rev);
    }
};

class Solution2
{
public:
    int helper(int n, int digits)
    {
        if (n % 10 == n)
            return n;

        int rem = n % 10;
        return (rem * pow(10, digits - 1)) + helper(n / 10, digits - 1);
    }

    int reverseNumber(int n)
    {
        int digits = (int)log10(n) + 1;
        return helper(n, digits);
    }
};

int main()
{
    // Solution1 sol1;
    Solution2 sol2;
    cout << sol2.reverseNumber(1389) << endl;

    return 0;
}