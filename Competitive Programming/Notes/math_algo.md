# **```Modular Exponentiation```**

```cpp
const int MOD = 1e9 + 7;

int modularFastExpo(int x, int n)
{
    int ans = 1;
    x = x % MOD;
    if (x == 0)
        return 0;

    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans % MOD * x % MOD) % MOD;
            --n;
        }

        x = (x * x) % MOD;
        // n /= 2;
        n >>= 1;
    }

    return ans;
}
```

# **```nCr```**

- Using 
```cpp
int n, r;
void ans()
{
    long double sum = 1;
    for (int i = 1; i <= r; ++i)
    {
        sum = sum * (n - r + i) / i;
    }

    cout << sum << endl;
}

// Complexity: O(r)
```

# **```Divisors of a number```** 
```cpp
vector<int> generateDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    return divisors;
}
```

# **```Number of Divisors (precomputed)```** 
```cpp
const int N = 1e7 + 10;
int arr[N];

void precompute()
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N; j += i)
        {
            arr[j]++;
        }
    }
}
```

## GCD and LCM
Relation: GCD(a, b) * LCM(a, b) = a * b