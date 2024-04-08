#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> calculateSieve(int n)
{
    /// for marking number in the 'n' range either true or false
    vector<bool> sieve(n + 1, true);
    /// to saving all primes we've got
    vector<int> primes;
    sieve[0] = sieve[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false;
        }
    }

    return primes;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        /// step 1: all primes between 2 to √r
        vector<int> prime = calculateSieve(sqrt(r));
        int size = r - l + 1;

        vector<bool> rangePrimeSieve(size, true);

        /// remaining values will be calculated here
        /// mark false if find any multiple of prime array element
        for (int i = 0; i < prime.size(); i++)
        {
            for (ll j = l; j <= r; j++)
            {
                if (j == prime[i])
                    continue;

                if (j % prime[i] == 0)
                    rangePrimeSieve[j - l] = false;
            }
        }

        vector<int> finalResultPrimes;

        for (int i = 0; i < rangePrimeSieve.size(); i++)
            if (rangePrimeSieve[i])
                finalResultPrimes.push_back(i + l);

        /// displaying the result prime numbers
        for (auto i : finalResultPrimes)
            cout << i << " ";

        cout << "\nTotal primes range from " << l << " to " << r << " is: " << finalResultPrimes.size() << endl;
    }

    return 0;
}