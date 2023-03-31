/**
 * @file LC_50_Pow(x,_n).cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-31
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        long double result = 1;
        long long power = abs(n);

        while (power)
        {
            /**
             * a ^ b = a x a x ... (for b times)
             * bruteforce: res = res * a
             * which is not at all optimized since only single
             * multiplication to the result
             * (a^b/2)^2 for even numbers
             * (a^b/2)^2 x 2 for odd numbers
             * with this way it will decrease computation since
             * for each step the number of iteration depending upon
             * power 'b' is reducing and the result is approaching by square of the number
             */

            /// if the power is odd atleast for two times we have to
            /// multiply to the result by number 'x' otherwise it will
            /// happen for once
            if (power & 1)
            {
                result *= x;
            }

            /// forwarding to the result by squaring the number
            /// which increases calculation by consuming less computation
            x = (double)x * x;
            /// dividing the n by 2 with bit manipulation
            power >>= 1;
        }

        if (n < 0)
            result = (double)1 / (double)result;

        return result;
    }
};

int main()
{
    Solution sol1;
    cout << (double)sol1.myPow(5, -3) << endl;

    return 0;
}