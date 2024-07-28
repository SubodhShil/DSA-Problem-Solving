## Handling next line error

```cpp

    string str = ", ";
    for (int i = 1; i <= 10; ++i)
        // cout << i << (i < 10 ? str : "");
        cout << i << ","[i == 10];
```

## Time

```cpp
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1.0 * ((double)clock()) / (double)CLOCKS_PER_SEC << " sec\n";
#endif
```

```cpp
    clock_t s = clock();
    while (t--)
        ans();
    clock_t e = clock();

    cout << 1.0 * (e - s) / CLOCKS_PER_SEC << endl;
```

## Modular operations

```cpp
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
```

```cpp
#define MOD 1000000007
long long modInv(long long i) {
	if(i <= 1) return i;
	else return MOD - (MOD/i) * modInv(MOD%i) % MOD;
}

//Function modInv() the modular inverse of i mod 10^9+7

/// Here is the single line compressed function code
long long modInv(long long i) { return (i <= 1) ? i : MOD - (MOD / i) * modInv(MOD % i) % MOD; }
```

## Mathematical

```cpp
#define lcm(x, y) (x / __gcd(x, y)) * (y)
```

```cpp
#define factorial(n) ({long long result = 1; for (int i = 2; i <= (n); ++i) result *= i; result; })
```

## Function in a function like notation in C++

```cpp
void ans()
{
    cin >> n;
    string str;
    cin >> str;

    auto identifier = [&]() {

    };
}
```
