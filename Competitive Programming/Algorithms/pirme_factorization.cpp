#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int spf[MAXN];
vector<int> result;

void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
    for (int i = 3; i * i < MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

void getFactorization(int x)
{
    while (x != 1)
    {
        result.push_back(spf[x]);
        x = x / spf[x];
    }
    for (auto i : result)
        cout << i << " ";
}

int main()
{
    // sieve();
    // int n;
    // cin >> n;
    // getFactorization(n);

    return 0;
}
