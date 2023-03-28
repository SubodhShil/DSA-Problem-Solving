#include <bits/stdc++.h>
using namespace std;

int countsDivisorNaive(int n)
{

    /**
     * @brief
     * check for all number in the range of (1 to n) if divisible
     * @complexity: O(N)
     */

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count++;
    }

    return count;
}

int countsDivisor(int n)
{
    /// 1 has only one divisor which is 1 itself
    /// all other numbers except for 1 has atleast two divisors those are 1 and itself
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

    /// @algorithm: using bit manipulation => n&1 is 1, then odd, else even
    /// if number is odd
    if (n & 1)
    {
        /// an odd number can only be divisible by odd numbers
        /// since odd number starts from 3 so our loop initialized with value 3
        for (int i = 3; i <= n / 2; i++)
        {
            if (n % i == 0)
                ++count;
        }
        return count;
    }

    /// if number is even
    else
    {
        /// an even number can divisible by both even and odd numbers
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                ++count;
        }

        return count;
    }

    return count;
}

int countDivisorOptimized(int n)
{
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            if (n / i == i)
                count++;
            else
                count += 2;
    }

    return count;
}

int main()
{

    int num = 0;
    cout << "Enter number: ";
    cin >> num;
    cout << "Divisor count is: " << countsDivisor(num) << endl;
    cout << "Divisor count is: " << countDivisorOptimized(num) << endl;

    return 0;
}