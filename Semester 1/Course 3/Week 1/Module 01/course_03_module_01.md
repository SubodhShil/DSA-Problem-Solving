> # **```Time Complexity```**

- Time complexity is a parameter that compares among algorithms and determine which algorithm will perform better in case of the input size increases drastically over time.

- Time complexity doesn't calculated in seconds, miliseconds or any other specific unit measurements, rather use some asymptotic notations like Big Oh, Big Omega and Big Theta to determine if an algorithm is good, best or average.

- The reason for avoid using unit-specific notation in time complexity calculation is that computer devices can vary depending on hardware requirement and specification. Even if two device with the equal hardware requirement may still execute same instruction within a different timeframe due to additional constraint imposed by the system.

- Time complexity of a program measures by the number of steps or iterations it used to accomplish the algorithm.

- **O(1)** is constant time complexity algorithm, which means it doesn't includes any iteration or steps to accomplish the task. Nonetheless, the program might only executes some specific statemetns only.

- **O(N)** time complexity means the input size changes in a constant manner or constant interval.

- **O(log N)** time complexity means the input size doesn't change in a constant or specific interval.  
  - To easily find out if the complexity of a program is logarithmic, look for the program's iterator 'i' or any other variable is updated through multiplication or division by a constant value, then it indicates a logarithmic complexity algorithm.  

- **O(N^2)** algorithm will take upto 1 second to compute 10^3 instructions.

- **O(N LogN)** algorithm will take upto 1 second to compute 10^5 instructions and take upto 2 seconds to compute 2 x 10^7 instructions.

- Most of online judges takes 1 second to compute 10^7 operations.

&nbsp;

**Some important rules to calculate time complexity:**

1. Always calculate for worst case.
2. Ignore the constants.
3. Complexity of a program with multiple loops is addition of complexity of each loop.

&nbsp;

## <p align="center"> **Determine the time complexity** </p>

### <p align="center"> **(1)** </p>

```cpp
/// calculate sum 1 till n
int n;
cin >> n;

int sum = n * (n + 1) / 2;
cout << sum;
```

### <p align="center"> **(2)** </p>

```cpp
for(int i = 0; i < n; ++i)
{
    if(arr[i] == x)
    {
        return i;
    }
}
```

**Time Complexity: O(N)**

### <p align="center"> **(3)** </p>

```cpp
for(int i = 0; i <= n/2; ++i)
{
    /// some works here
}
```

**Time Complexity: O(N)**

### <p align="center"> **(4)** </p>

```cpp
for(int i = 0; i <= n; ++i)
{
    /// some works here
}

for(int i = 0; i <= m; ++i)
{
    /// some works here
}
```

**Time Complexity: O(N) + O(M) = O(N + M)**

### <p align="center"> **(5)** </p>

```cpp
int a = 100;
int b = 200;
int ans = a + b;
cout << ans;
```

**Time Complexity: O(N)**

### <p align="center"> **(6)** </p>

```cpp
for(int i = 1; i <= n; i *= 2)
{
    cout << "Hello\n";
}
```

**Time Complexity: O(Log2N)**

### <p align="center"> **(7)** </p>

```cpp
for(int i = 1000; i >= 1; i /= 10)
{
    cout << "Hello\n";
}
```

Caution: In case of if you put i >= 0 this will eventually condition true infinitely.

**Time Complexity: O(Log10N)**

### <p align="center"> **(8)** </p>

```cpp
for(int i = 1; i <= sqrt(n); ++i)
{
    cout << i;
}
```

**Time Complexity: O(sqrt N)**

### <p align="center"> **(9)** </p>

```cpp
int n = 13;

for(int i = 2; i * i <= n; ++i)
{
    if(a % i == 0)
        return false;
}

return true;
```

**Time Complexity: O(sqrt N)**

### <p align="center"> **(10)** </p>

```cpp
for(int i = 1; i <= n; ++i)
{
    for(int j = i; j <= n; ++j)
    {
        /// statements...
    }
}
```

**Time Complexity: O(N * N)**

### <p align="center"> **(11)** </p>

```cpp
/// sum of digits from 10 to n
for (int i = 10; i <= n; ++i)
{
    int number = i;
    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << sum << endl;
}
```

**Time Complexity: O(N LogN)**
