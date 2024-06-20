/*
                            ॐ JAY JAY SRI RAM ॐ

    * Generate divisor using sqrt
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

const int S = 1e7 + 9;
int divisorArr[S];
vector<int> allPrimes;

// find single divisor
void divisor()
{
    vector<int> allDivisors;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            allDivisors.push_back(i);
            if (n / i != i)
                allDivisors.push_back(n / i);
        }
    }

    for (auto i : allDivisors)
        cout << i << ' ';
}

// Find divisors in a range from 1 to n
void ranged_divisors(int N)
{
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j += i)
        {
            divisorArr[j]++;
        }
    }
}

void print_all_primes()
{
    int n;
    cin >> n;

    ranged_divisors(n);

    for (int i = 0; i < n; ++i)
    {
        if (divisorArr[i] == 2)
            allPrimes.push_back(i);
    }

    for (int i = 0; i < n; ++i)
        cout << allPrimes[i] << ' ';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}