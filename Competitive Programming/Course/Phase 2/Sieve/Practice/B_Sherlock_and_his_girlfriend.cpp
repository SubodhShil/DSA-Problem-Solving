/// https://codeforces.com/contest/776/problem/B

#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 100000 + 10;

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
    // marking all primes as 1 and rest of composite number should be marked as 2
    int n;
    cin >> n;

    (n == 1 or n == 2) ? cout << 1 << endl : cout << 2 << endl;

    for (int i = 2; i <= n + 1; ++i)
    {
        if (primes[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while (t--)
        ans();

    return 0;
}