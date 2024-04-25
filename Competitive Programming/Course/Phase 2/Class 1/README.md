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

### Optimized

```cpp
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
```

### All prime numbers are odd except for 2. So, two (2) is the only number that is prime and even at the same time. And all even numbers are composite.

### Count prime numbers in a range 

> Prime counting function: There is a formula to find out count of prime numbers in between a range.

```1.25506 * (n / ln(n))```

```cpp

```

<details>
<summary>Questions</summary>

1. [UVA-543](https://vjudge.net/problem/UVA-543)
2. 
</details>

