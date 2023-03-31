/**
 * @file GCD_and_LCM.cpp
 * @author Subodh Chandra Shil
 * @brief GCD of two number using optimized euclidean algorithm
 * @date 2023-03-31
 * @problem_link: https://www.codingninjas.com/codestudio/problems/gcd_975284?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2)
{
    while (n1 != n2)
    {
        /// as per euclidean formula gcd(a, b) = gcd(a % b, b) if a > b
        n1 %= n2;
        /// after 'n1' has initialized with n1 % n2 the
        /// value in n1 is lesser than n2
        /// so n1 is no more a greater number than n2
        /// thus we have to swap two number to retain n1 bigger
        swap(n1, n2);

        if (n1 == 0 || n2 == 0)
            return max(n1, n2);

        /// gcd of two same number is actually that number
        if (n1 == n2)
            return n1;
    }

    return n1;
}

int GCD2(int n1, int n2)
{
    if (!n1 or !n2)
        return max(n1, n2);

    while (n1 != n2)
    {
        /// @formula: gcd(a, b) = gcd(a - b, b)
        if (n1 > n2)
        {
            n1 -= n2;
        }

        else
        {
            n2 -= n1;
        }
    }

    return n2;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD2(a, b) << endl;

    return 0;
}