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

- ## Sum of N odd positive integers 

```cpp
int n;
cin >> n;
long long oddSum = n * 1LL * n;
cout << oddSum << endl;
```

- ## Sum of N odd positive integers 

```cpp
long long evenSum = n * 1LL * (n + 1);
cout << evenSum << endl;
```

