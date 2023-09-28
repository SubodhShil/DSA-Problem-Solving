> # **```Naive GCD Algorithm```**

GCD is a number that divides two numbers at a time and the number is the biggest value among all other divisors. 

```
GCD(0, n) = n
    For example, The GCD of 0 and 5 is 5 because 5 is the largest positive integer that divides both 0 and 5.

GCD(0, 0) is invalid 
    The GCD of 0 and 0 is undefined because all integers divide 0, so there is no unique greatest common divisor in this case.

Therefore, there is no GCD such 0.
```

## Steps:
1. We have to iterate over a series of number, the biggest number in the series which divides both inputs is the GCD. 

2. However, the search range has not been specified. As we know, it is not possible to find a common divisor that is greater than the smallest number among them. Therefore, our search range spans from 1 to the minimum of the two input numbers.

```cpp
/// Time Complexity: O(min(a, b))
/// TLE
int naive_GCD(int a, int b)
{
    int result_gcd = INT32_MIN;
    for (int i = 1; i <= min(a, b); ++i)
    {
        if (a % i == 0 && b % i == 0)
            result_gcd = max(result_gcd, i);
    }

    return result_gcd;
}
```

&nbsp;

> # **```Euclid's Algorithm```**

Euclid's approach of finding GCD of two number is effecient yet simple. The algorithm is based on the observation GCD of a zero and non-zero number is the non-zero number. So, we will keep iterate untile one of the number become zero. Hence, the remaining number is the GCD.

```cpp

```

> # **```Extended Euclid's Algorithm```**

### **ax + by = gcd(a, b)**

Value of 'a' and 'b' will be given but you've to determine the value of 'x' and 'y'.

> # **```Chinese Remainder Theorem```**

### **```Linear Congruence```**
Linear congruence is a notation that 