#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 10000000 + 10;

bitset<N> primes;
vector<int> onlyPrimes;
vector<int> counting(N, 0), res(N + 1, 0);

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

int32_t main()
{
    sieveOptimized();

    for (int x = 1; x <= 3200; ++x)
    {
        for (int y = 1; y <= 60; ++y)
        {
            // int sum  = llround(pow(x, 2)) + llround(pow(y, 4));
            int sum = (x * x) + (y * y * y * y);
            if (sum > 1e7)
                continue;
            if (primes[sum])
                counting[sum] = 1;
        }
    }

    for (int i = 1; i <= 1e7; ++i)
        counting[i] += counting[i - 1];

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << counting[x] << endl;
    }

    return 0;
}