## Generate number of divisors 

```cpp

```

## Sieve of eratosthenes

### Bruteforce

```cpp
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
}
```


