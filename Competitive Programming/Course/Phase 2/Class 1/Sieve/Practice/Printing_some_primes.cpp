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

const int N = 1e8;
// bool primes[N];
bitset<N> primes;
vector<int> onlyPrimes;

void sieveOptimized()
{
    for (int i = 3; i <= N; i += 2)
        primes[i] = 1;

    for (int i = 3; i * i <= N; i += 2)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= N; j += (i + i))
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

void ans()
{
    sieveOptimized();

    // cout << onlyPrimes.size() << endl;
    for (int i = 0; i < onlyPrimes.size(); i += 100)
    {
        cout << onlyPrimes[i] << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while (t--)
        ans();

    return 0;
}