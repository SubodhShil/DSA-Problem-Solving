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

const int N = 1e8 + 10;
bool primes[N];
vector<int> onlyPrimes;

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

void ans()
{
    for (int i = 1; i < 1000; i += 1)
    {
        cout << i << " : " << onlyPrimes[i - 1] << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    sieveOptimized();
    int t = 1;
    while (t--)
        ans();

    return 0;
}