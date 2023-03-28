#include <bits/stdc++.h>
using namespace std;

int countsDivisor(int n)
{
    /// 1 has only one divisor which is 1 itself
    /// all other numbers has atleast two divisors
    /// @observation: for a prime number it has only two divisors
    if (n == 1)
        return 1;

    /**
     * @brief
     * count for track how many divisors are there for a number
     * since every other number except 1 has atleast two divisors
     * so we have initialized with 2
     */
    int count = 2;

    /// if number is even
    /// @algorithm: using bit manipulation => n&1 is 1, then odd, else even
    if (n & 1)
    {
    }

    /// if number is odd
}

int main()
{

    return 0;
}