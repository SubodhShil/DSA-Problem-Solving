/**
 * @file Sieve_of_Eratosthenes.cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-30
 * @sources:    https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
 *
 */

#include <bits/stdc++.h>
using namespace std;

int Sieve_of_Eratosthenes(int n)
{
    vector<bool> primes(n + 1, true);
    int prime_number_count = 0;

    /// 0 and 1 are not prime numbers, so mark them as false
    primes[0] = primes[1] = false;

    for (int i = 2; i <= n; i++)
    {
        /// check whether the current number is marked as prime or non prime
        /// if prime then all number of it's multiple are not prime

        /// @notice: we don't required to check each number after a number
        /// because the previous prime number already marked some numbers as non prime
        /// the optimal way is to getting the first composite that is only divisible by
        /// the current prime is square of that number
        if (primes[i])
        {
            prime_number_count++;

            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    return prime_number_count;
}

int main()
{
    cout << Sieve_of_Eratosthenes(10) << endl;

    return 0;
}