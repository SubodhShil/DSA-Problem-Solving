/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/UVA-543
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c, t;

const int N = 1000000 + 10;
bool primes[N];
vector<int> onlyPrimes;
map<int, bool> m_primes;

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

    primes[2] = 1, m_primes[2] = 1;
    onlyPrimes.push_back(2);
    for (int i = 3; i <= N; i += 2)
    {
        if (primes[i])
            onlyPrimes.push_back(i), m_primes[i] = 1;
    }
}

void ans()
{
    vector<int> result;
    int idx = lower_bound(onlyPrimes.begin(), onlyPrimes.end(), n) - onlyPrimes.begin();

    if (onlyPrimes[idx] != n)
        --idx;

    // cout << onlyPrimes[idx] << endl;

    int mx = 0;

    for (int i = idx; i >= 0; --i)
    {
        int current_num = onlyPrimes[i], next_num = abs(n - current_num);

        if (m_primes.count(next_num) and mx < abs(current_num - next_num))
        {
            if (!result.empty())
                result.clear();

            result.push_back(max(current_num, next_num));
            result.push_back(min(current_num, next_num));
            mx = abs(current_num - next_num);
            break;
        }
    }

    if (result.empty())
        cout << "Goldbach's conjecture is wrong.\n";
    else
        cout << n << " = " << result[1] << " + " << result[0] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    sieveOptimized();

    while (cin >> n and n)
    {
        ans();
    }

    return 0;
}