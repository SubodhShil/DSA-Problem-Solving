#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
     * @brief evaluate modulo of two numbers without using % operator
     *        we can interprate this algorithm as low level implementation
     *        of '%' operator
     */

    int A, B;
    cin >> A >> B;

    /**
     * Dividend = Divisor * Quotient + Remainder
     *          = Divisor * floor(Dividend / Divisor) + Remainder
     * Hereby, Remainder = Dividend - (Divisor * floor(Dividend / Divisor))
     * Assume, Dividend => A and Divisor => B so, the precise formula is:
     *                                            A - (B * ( A / B))
     */

    cout << "Remainder: A % B is: " << (A % B) << endl;
    cout << "Remainder of " << A << " and " << B << " is: " << A - (B * int(A / B)) << endl;

    return 0;
}