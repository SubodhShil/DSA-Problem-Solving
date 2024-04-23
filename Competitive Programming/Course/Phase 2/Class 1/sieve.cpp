/*
                            ॐ JAY JAY SRI RAM ॐ

    * Sieve algorithm
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n, k, m, a, b, c;
const int N = 100;
bool primes[N];
vector<int> onlyPrimes;

void sieveBruteforce()
{
    memset(primes, 1, sizeof(primes));
    primes[0] = primes[1] = 0;

    for (int i = 2; i <= N; ++i)
    {
        for (int j = i + i; j <= N; j += i)
        {
            primes[j] = 0;
        }
    }

    for (int i = 2; i <= N; ++i)
    {
        if (primes[i])
            onlyPrimes.push_back(i);
    }
}

void sieveOptimized()
{
    for (int i = 3; i * i <= N; i += 2)
        primes[i] = 1;

    for (int i = 3; i <= N; i += 2)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += (i + i))
            {
                primes[j] = 0;
            }
        }
    }

    primes[2] = 1;
    onlyPrimes.push_back(2);
    for (int i = 3; i <= N; i += 2)
    {
        if (primes[i])
            onlyPrimes.push_back(i);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        sieveOptimized();

    return 0;
}