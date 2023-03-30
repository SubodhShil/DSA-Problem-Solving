/**
 * @file segmented_sieve.cpp
 * @author Subodh Chandra Shil
 * @date 2023-03-30
 * @source: https://youtu.be/MY0fXk-3BVQ
 */

#include <bits/stdc++.h>
using namespace std;

int N = 1e6;
/// @brief initially mark all numbers as prime
vector<bool> sieve(N + 1, true);

void createSieve()
{
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; i <= N; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int N)
{
    vector<int> v;
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i])
        {
            v.push_back(i);
        }
    }

    return v;
}

int main()
{
    createSieve();

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        /// step 1: generate all prime in the range of √R (sqrt of R)
        vector<int> sqrt_n_primes = generatePrimes(sqrt(r));

        /// step 2: create a dummy array of size (r - l + 1)
        ///         initialize with value 1
        /// why creating dummy array? the given range of l to r
        /// could break by overflowing valid range of 10^7
        /// whereas dummy array stores only element between the range
        /// that can't break the range
        vector<int> dummyArr(r - l + 1, 1);

        /// step 3: for the prime number mark
        ///         it's multiple as false
        for (auto i : sqrt_n_primes)
        {
            int firstMultiple = ;

            for (int j = (firstMultiple, i * i); j <= r; j += i)
            {
            }
        }

        return 0;
    }