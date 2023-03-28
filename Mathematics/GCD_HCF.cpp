#include <bits/stdc++.h>
using namespace std;

/// GCD or HCF of two numbers
/// extract all factors of both numbers
/// the biggest number is the result
int GCD_HCF_Naive(int n1, int n2)
{
    int iteratorStop = min(n1, n2);
    int result = 0;

    // for(int i = 1; i <= iteratorStop; i++)
    /// the line mention below provides better complexity
    for (int i = iteratorStop; i >= 1; i--)
    {
        if (!(n1 % i) && !(n2 % i))
        {
            result = max(result, i);
        }
    }

    return result;
}

int GCD_euclidean(int n1, int n2)
{
    int result = 0;
    int max_n = max(n1, n2), min_n = min(n1, n2);

    while (max_n && min_n)
    {
        if (max_n > min_n)
            max_n = max_n - min_n;
        else
        {
            swap(max_n, min_n);
            max_n = max_n - min_n;
        }
    }

    result = max(max_n, min_n);

    return result;
}

int GCD_euclidean_Optimized(int n1, int n2)
{
    /// gcd(a, b) -> gcd(a - b, b) -> ... -> gcd(0, b) or gcd(a, 0)
    /// since gcd(0, b) => b or gcd(a, 0) => a
    /// @better_approach: gcd(a, b) = gcd(a % b, b)

    int max_num = max(n1, n2);
    int min_num = min(n1, n2);

    while (max_num and min_num)
    {
        max_num %= min_num;

        /// @explanation: in the above mentioned line min_num is quotient
        /// after the division, the remainder is always lesser than divisor
        /// so, after the operation has done max_num is no more max
        /// that is why we have to swap both numbers
        swap(max_num, min_num);
    }

    return max_num;
}

int GCD_library_builtin(int n1, int n2)
{
    return __gcd(n1, n2);
}

int main()
{
    cout << "Enter two values: ";
    int n1, n2;
    cin >> n1 >> n2;
    // cout << GCD(n1, n2) << endl;
    cout << GCD_euclidean(n1, n2) << endl;
    cout << GCD_euclidean_Optimized(n1, n2) << endl;

    return 0;
}