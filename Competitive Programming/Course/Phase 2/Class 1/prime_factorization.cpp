/*
                            ॐ JAY JAY SRI RAM ॐ

    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

void prime_factorization(int n)
{
    vector<int> prime_factors;
    while (n % 2 == 0)
        prime_factors.push_back(2), n /= 2;

    for (int i = 3; i * i <= n; i += 2)
        while (n % i == 0)
            prime_factors.push_back(i), n /= i;

    if (n > 2)
        prime_factors.push_back(n);

    for (auto i : prime_factors)
        cout << i << " ";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        prime_factorization(24);

    return 0;
}