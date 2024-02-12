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
