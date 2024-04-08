# **```String```**

## ```How to input multiline strings```

<details>
<summary>Snippet</summary>

```cpp
string str;
int n;
cin >> n;

cin.ignore(); // ignore the first '\n' after test case 'n' input
for(int i = 1; i <= n; ++i)
{
    getline(cin, str);
    cout << str << endl;
}
```
</details>


&nbsp;

> # **```Time Complexity```**

> "The time complexity of an algorithm estimates how much time the algorithm will use for some input. The idea is to represent the efficiency as a function whose parameter is the size of the input. By calculating the time complexity, we can find out whether the algorithm is fast enough without implementing it."

**Best case scenario**: Suppose we're finding an element 'x' in an array. The best case scenario is the element can be found in first index. So, algorithm runs for 1 iteration.  

**Worst case scenario**: Finding element 'x' but it isn't in the array. So algorithm runs for iterations similar to the size of the array, still can't find the element.

In time complexity we determine an algorithm be good by it's worst scenario. Like how the algorithm will perform or behave in immense amount of input. The performance is simply how much steps it requires to run the algorithm. The more step it requires the more the algorithm is inefficient.


| Types of Complexities       | Big O Notation |
| --------------------------- | -------------- |
| Constant Time               | O(1)           |
| Linear Time                 | O(n)           |
| Quadratic Time              | O(n²)          |
| Cubic Time                  | O(n³)          |
| Exponential Time            | O($2^n$)       |
| Factorial Time              | O(n!)          |
| Logarithmic Time            | O(log n)       |
| Linearithmic Time           | O(n log n)     |
| Polynomial Time             | O($n^k$)       |
| Exponential Time (Constant) | O($k^n$)       |

| Number    | Logarithm base |
| --------- | -------------- |
| 1         | 0              |
| 2         | 1              |
| 1024      | 10             |
| $10^5$    | 16.6           |
| $10^6$    | 19.9           |
| $10^9$    | 29.9           |
| $10^{18}$ | 59.8           |
|           |

# **```Bit Manipulation```**

### <ins>Check even or odd</ins>

<details>
<summary>Idea</summary>

All the odd number has '1' as last bit. If the last bit is 1 then it is odd otherwise 0.
</details>

<details>
<summary>Code snippet</summary>

```cpp
if(x & 1) cout << "Odd number\n";
else cout << "Even number\n";
```
</details>

### <ins>How to check last bit 0 or 1</ins>

<details>
<summary>Result</summary>

```cpp
bool lastBit = (x & 1);
if(lastBit) cout << "Last bit is 1\n";
else cout << "Last bit is 0\n";
```
</details>


### <ins>Check nth bit 0 or 1</ins>

<details>
<summary>Idea</summary>

কোন bit যেমন আছে তেমনটা রাখতে চাইলে (bit & 1) অথবা (bit | 0) করতে হবে । 
</details>

<details>
<summary>Code snippet</summary>

```cpp
bool nthBit = (number >> n) & 1;
cout << nthBit << endl;
```
</details>

<details>
<summary>Macro</summary>

```cpp
#define kth_bit(x, k) (x >> k) & 1
```
</details>


### Count bit 1 or 0
<details>
<summary>Result</summary>

```cpp
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        /* for (int j = 0; j < 10; ++j)
        {
            bool nthBit = ((i >> j) & 1);
            if (nthBit) ++cnt;
        } */
        cnt += __builtin_popcount(i);
    }
    cout << cnt << endl;
}
```
</details>


### <ins>How to turn on a bit in a number?</ins>

<details>
<summary>Macro</summary>

```cpp
#define on_kth_bit(x, k) (x | (1 << k))
```
</details>

### <ins>How to turn off a bit in a number?</ins>

<details>
<summary>Macro</summary>

```cpp
#define off_kth_bit(x, k) (x & (~(1 << k)))
```
</details>

### <ins>How to toggle a bit in a number?</ins>
Idea: ```0^1 = 1, 1^1 = 0```

<details>
<summary>Macro</summary>

```cpp
#define toggle_kth_bit(x, k) (x ^ (1 << k))
```
</details>


### <ins>How to multiply a number by 2 without using * </ins>
```x << 1```, ```x >> 1```

### <ins>How to find the power of 2 or is power of 2?</ins>

<details>
<summary>Idea</summary>

A number that is poewr of 2, contains single bit '1'.
</details>

<details>
<summary>Macro</summary>

```cpp
#define is_power_of_two(x) 
```
</details>

### XOR
<details>
<summary>Concept</summary>

**XOR of similar bit is 0**  
```
0 ^ 0 = 0  
1 ^ 1 = 0  
0 ^ 1 = 1  
1 ^ 0 = 1
```

Formula 1: ```x << k = x * (2^k)```  
Formula 2: ```x >> k = x / (2^k)```
</details>


### Left shift (long long)
```cpp
long long ans = 1LL << 40;
```

# **```Bitmask```**
    

