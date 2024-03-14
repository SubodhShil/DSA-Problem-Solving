# ```Time complexity of recursive algorithm```

> Master theorem: 

&nbsp;

# ```Space complexity of recursive algorithm```

> Space complexity of a recursive algorithm determined by **total number of function calls piled in the implicit memory stack**. 

> It can also be determined by recursive tree visualization, which says space complexity of a recursive algorithm is the **maximum depth multiplied by the space complexity of each node**. 

&nbsp;

# ```Memoization```

It's all about saving results of duplicate function calls occurrences and invoke later on if needed.

&nbsp;

# ```Floor, ceil, round```


- ### Floor of two integer number is automatically determined by division of two integer numbers.
```cpp
    int a = 14, b = 5;
    cout << (a / b) <<endl; // 2 
```

- ### Ceil of two integer number can be evaluate by following tricks:

- Tricks
```cpp
    int a = 14, b = 5;
    
    /// Trick 1
    cout << ceil(1.0 * a / b) << endl; // 3
    
    /// Trick 2
    cout << (a - 1) / b + 1 <<endl; // 3

    // or Trick 2.1
    cout << (a + b - 1) / b << endl; // 3
```

&nbsp;

# ```Formulas```

- ## Sum 1 to N
```cpp
void bruteforce()
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += i;
    cout << sum << endl;
}

void optimized()
{
    int sum = 1LL * (n / 2) * (n + 1);
    cout << sum << endl;
}
```

- ## Sum of first N odd positive integers 
```cpp
int n;
cin >> n;
long long oddSum = n * 1LL * n;
cout << oddSum << endl;
```

- ## Sum of first N even positive integers 
```cpp
long long evenSum = n * 1LL * (n + 1);
cout << evenSum << endl;
```

- ## Sum of first N squares
```cpp
long long squareSum = n / 6 * (n + 1) * (2 * n + 1);
cout << squareSum << endl;
```

- ## Sum of first N natural numbers which are divisible by X or Y
```cpp
   int Sx, Sy, Sxy, sum;
   Sx = ((n / x)) * (2 * x + (n / x - 1) * x) / 2;
   Sy = ((n / y)) * (2 * y + (n / y - 1) * y) / 2;
   Sxy= ((n / (x * y))) * (2 * (x * y) + (n / (x * y) - 1) * (x * y))/ 2;
   sum = Sx + Sy - Sxy;
```

- ## Find the formula for the sum of the positive integers from 1 to n that are not multiple of K. 
```cpp
int sum_of_k_multiple = 1LL* (n / k) * (2 * k + (n / k - 1) * k) / 2;
int sum_till_n = 1LL * n / 2 * (n + 1);

cout << sum_till_n - sum_of_k_multiple << endl;
```

- ## Arithmetic Progression
Given terms ```a, n, d```   
- **Nth term of AP**: $a + (n - 1)d$  
- **Sum of first n terms of AP**: $\frac{n}{2} (2a + (n - 1)d)$

```cpp
int nthTerm(int a, int n, int d) {
    return a + (n - 1) * d;
}
int sumOfTerms(int a, int n, int d) {
    return (n / 2) * (2 * a + (n - 1) * d);
}
```

- ## Geometric Progression
Given terms ```a, r, n```   
- **Nth term**: $ar^{n-1}$  
- **Sum of first n terms of AP**: $\frac{a(r^{n} - 1)}{(r - 1)}$

```cpp
int nthTerm(int a, int r, int n) {
    return a * pow(r, n - 1);
}

int sumOfTerms(int a, int r, int n) {
    return (a * (pow(r, n) - 1)) / (r - 1);
}
```

- ## Logarithm

```cpp
    int n, targetBase;
    cin >> n >> targetBase;

    int a = log2(n);                    // base 2
    int b = log10(n);                   // base 10
    int c = log(n);                     // base 'e' or natural base
    int d = log2(n) / log2(targetBase); // base 'target'
```

- Find number of digits using logarithm 
```cpp
#define number_cnt(n) floor(log10(n)) + 1
```

- Find number of digits in N! number using logarithm
```cpp
    int n;
    cin >> n;
    double digitCnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        digitCnt += log10(i);
    }

    cout << digitCnt + 1 << endl;
```


# ```Modular Arithmetic```

- #### *Modulo of a negative number is ```(-n + mod) % mod)```*

- #### *```num % n = [0 to n - 1]```*
- ### Reason of using mod value as $10^9$ + 7? 
  - > The number $(10^9 + 7)$ is a prime number. Modding a number with a prime number aims to ensure that no two congruent series have the same value. However, even with a prime modulo, specific calculations might produce the same remainder. On the other hand, the value is quite large, so it also ensures against overflow.

    ```cpp
                    #define MOD 1e9 + 7
     ```
