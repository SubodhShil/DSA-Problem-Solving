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