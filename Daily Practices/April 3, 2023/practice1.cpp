#include <bits/stdc++.h>
using namespace std;
#define MAX 1e6 + 1

/// compute all primes in the valid range of array (10^6)
/// using simple sieve of eratosthenes
vector<int> simpleSieve()
{
    vector<bool> isPrime(MAX, true);

    vector<int> allPrimes;

    for (int i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            allPrimes.push_back(i);
            for (int j = i * i; j < MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return allPrimes;
}

vector<int> segmentedSieve(int L, int R, vector<int> &allPrimes)
{
    /// resulting array
    vector<bool> rangeArraySieve(R - L + 1, true);

    /// mapping L to 0 and R to L - R
    /// to map L as 0: L - L = 0 and R = R - L
    for (int i = 0; allPrimes[i] * (1LL) * allPrimes[i] <= R; i++)
    {
        int currentPrime = allPrimes[i];
        /// base value => (n / i) * i
        /// closest multiple of a prime number
        long long base = (L / currentPrime) * currentPrime;
        /// if base is smaller than L
        /// ex: (37 / 2) * 2 = 36
        if (base < L)
        {
            base += currentPrime;
        }

        for (long long j = base; j <= R; j += currentPrime)
        {
            rangeArraySieve[j - L] = false;
        }

        if (base == currentPrime)
        {
            rangeArraySieve[base - L] = true;
        }
    }
}

int main()
{

    return 0;
}