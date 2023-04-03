#include <bits/stdc++.h>
using namespace std;
#define MAX 1e6 + 1

vector<int> simpleSieve()
{
    vector<bool> isPrime(MAX, true);

    vector<int> allPrimes;

    for (int i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            allPrimes.push_back(i);
            for (int j = i * i; j < MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return allPrimes;
}

vector<int> segmentedSieve(int R, int L, vector<int> &allPrimes)
{
    /// resulting array
    vector<bool> rangeArraySieve(R - L + 1, true);

    for (int i = 0; allPrimes[i] * (1LL) * allPrimes[i] <= R; i++)
    {
        
    }
}

int main()
{

    return 0;
}