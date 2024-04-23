/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://www.spoj.com/problems/TDPRIMES/
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

void sieveBruteforce()
{
    memset(primes, 1, sizeof(primes));
    primes[0] = primes[1] = 0;
    vector<int> onlyPrimes;

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

    for (auto i : onlyPrimes)
        cout << i << " ";
}

void sieve()
{
    memset(primes, 1, sizeof(primes));
    primes[2] = true;

    for (int i = 2; i <= N; ++i)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
            }
        }
    }
}
void ans()
{
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        // ans();
        sieveBruteforce();

    return 0;
}