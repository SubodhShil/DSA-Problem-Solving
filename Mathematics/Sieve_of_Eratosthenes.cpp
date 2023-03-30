/**
 * @file Sieve_of_Eratosthenes.cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-30
 * @sources:    https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
 * @problem_link: https://leetcode.com/problems/count-primes/
 */

#include <bits/stdc++.h>
using namespace std;

/// @brief an empty array to store all prime number
vector<int> primeResult;

/// @time_complexity: O(n log (log n))
/// @disadvantage: could throw error for big input that exceeds 1e6 or 10^6 or 1,000,000
///                which is maximum limit for local array storage
///                as for glboal array limit can't help more if size is more than 1e7 or 10^7
int simple_sieve_of_eratosthenes(int n)
{
    vector<bool> primes(n + 1, true);
    int prime_number_count = 0;

    /// 0 and 1 are not prime numbers, so mark them as false
    primes[0] = primes[1] = false;

    for (int i = 2; i <= n; i++)
    {
        /// check whether the current number is marked as prime or non prime
        /// if prime then all number of it's multiple are not prime

        /// @explanation: we don't required to check each number after a number
        /// because the previous prime number already marked some numbers as non prime
        /// the optimal way is to getting the first composite that is only divisible by
        /// the current prime is square of that number
        if (primes[i])
        {
            prime_number_count++;

            // Cancelling out all the multiples of i
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    /// @brief loop that stores prime numbers
    /// TODO
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
            primeResult.push_back(i);
    }

    return prime_number_count;
}

int linear_sieve(int n)
{
}

/// @usecase: required for big input that could overflow maximum
///           size of array in both locally and globally
///           for example, size can be as big as 10^9
/// @source:
int segmented_sieve(int low, int high, int n, vector<int> &primeResult)
{
    int x = floor(sqrt(n));
    vector<bool> isPrime(high - low + 1, true);
}

int main()
{
    cout << simple_sieve_of_eratosthenes(10) << endl;

    return 0;
}