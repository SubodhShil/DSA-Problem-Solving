> # ```Mathematics```

## ```Manhattan distance```

The **Manhattan distance** is a formula that can used for distance between two points. For two points (x1, y1) and (x2, y2), the Manhattan distance is calculated as:

Manhattan distance = ```|x2 - x1| + |y2 - y1|```


## ```GCD and LCM```

**GCD(Greatest Common Divisor) using LCM**  

### **GCD(a, b) = $\cfrac {|a.b|}{LCM(a,b)}$**

**LCM(Least Common Divisor) using GCM**  

> ### **LCM(a, b) = $\cfrac {|a.b|}{GCD(a, b)}$**

---

```cpp
// GCD or HCF

        /* GCD(a, b) = gcd(a - b, b) where a > b; */

        /*
        Bruteforce
            1. determine the lowest value among two given number
            2. now start  reverse-iteration from the lowest value, and decrease by every unsuccessful iteration the lowest value has to decrease by 1
            3. at a point of the iteration when both of the number get divided you have to stop the loop and thus the divisor is the answer
         */

        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        int min_num = min(a, b);
        while (min_num > 0)
        {
            if (a % min_num == 0 && b % min_num == 0)
                break;
            else
                min_num--;
        }

        cout << "\nGCD [Bruteforce Solution]\n==================\n";
        cout << min_num << " is GCD of " << a << " and " << b << endl;

        cout << "\nGCD [Euclidean Algorithm // Iterative]\n==================\n";
        int n1 = a, n2 = b;
        while (a % b != 0)
        {
            int rem = a % b;
            b = a;
            a = rem;
        }
        cout << b << " is GCD of " << n1 << " and " << n2 << endl;

        //* LCM
        //^ Determining LCM is quite easy if we get the result of GCD
        int LCM = (n1 * n2) / min_num;
        cout << "LCM of " << n1 << " and " << n2 << " is: " << LCM << endl;
```

---
&nbsp;

> # **```Sieve of Eratosthenes```**

<details>
<summary><b>Study Links</b></summary>
    1. https://codeforces.com/blog/entry/3519 <br>
    2. https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html <br>
    3. https://youtu.be/MY0fXk-3BVQ <br>
</details>

---

* Sieve of eratosthenes worked for only $10^8$ size of array.
* So, to work with the same "Sieve of Eratosthenes" algorithm we need to formulate slight different algorithm which is named as, "Segmented Sieve".
* For a range of 1 to 100 numbers, we just need to eliminate the fraction less than $\sqrt{100}$ = 10. Here since 10 itself not a prime number so we have to eliminate the fraction of the nearest prime number of 10 that is 7. In this case, [2, 3, 5, 7] are the set of prime numbers which fraction we have to eliminate to determine how many prime numbers are there in the range from 1 to 100. So, we can generalize this with a rule that any to find how prime numbers are there in a range from (a to n) we just need to eliminate fraction lesser than $\sqrt{n}$ as non-prime number.
*

> Steps to follow:  

1.

&nbsp;
---

## **Code**

```
    //* count of a number from all numbers 1 till n
    //* sieve of eratosthenes

    int n;
    cin >> n;

    vector<bool> primes(n, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
        {
            primes[j] = false;
        }
    }

    cout << "All primes from range 1 until " << n << " is = \n";
    for (int i = 0; i <= n; i++)
        cout << i << "\t" << primes[i] << endl;
```

---

># **```Modulo Arithmetic```**

> ### *****Study 01 🤙*** Date: Sept 24, 2022**

<details>
<summary><b>Study Links</b></summary>
    1. https://youtu.be/KdePjukNs98
    <br>
    2. https://codeforces.com/blog/entry/72527
</details>

---

* Sometime in competitive programming some questions requires the answer modulo with $10^9$ + 7 (Simply, **ans % $10^9$**)

* **Formulas**
  * (𝗮 + 𝗯) % 𝗻 = ((𝗮 % 𝗻) + (𝗯 % 𝗻)) % 𝗻
  * (𝗮 - 𝗯) % 𝗻 = ((𝗮 % 𝗻) - (𝗯 % 𝗻)) % 𝗻
  * (𝗮 𝘅 𝗯) % 𝗻 = ((𝗮 % 𝗻) 𝘅 (𝗯 % 𝗻)) % 𝗻

* For fast exponentiation we have to use 'modulo arithmetic'. We can determine exponent of a number with this algorithm using 'modulo arithmetic' concept and time complexity will be **O(log n)** previously which was a bruteforce **O(n)** solution.  
  * Suppose that, we have to determine $a^b$. 'b' is here the exponent or power of variable 'a'. The power 'b' can either even or odd a number.
    * If exponent 'b' is even we can represent **$a^b$** as, $\boxed{(a^{b/2})^2}$
    * On the other hand if exponent 'b' is odd then we can represent it as, $\boxed{(a^{b-1})\thinspace 𝘅\thinspace a}$ or more simply, $\boxed{(a^{b/2})^2 \thinspace 𝘅\thinspace a}$

<details>
<summary>Codes</summary>

<code>

```
//* Question 01:

    int fastPowerModulo(int a, int b)
    {
        //! a^b = (a^2)^(b/2)   => if 'b' is even
        //! a^b = (a^(b-1)) *a => if 'b' is odd
        //* fast power or fast exponent
        int res = 1;

        while (b > 0)
        {
            if (b & 1)
                res *= a;
            a *= a;
            b >>= 1;
        }

        return res;
    }
```

```
//* Question 02: 

    void practice2()
    {
        //* prime number
        /*
        Time Complexity: O(sqrt(n))
        */

        cout << "Enter a number: ";
        int n = 0;
        cin >> n;

        //* error case
        if (n == 1 || n == 0 || n < 0)
            cout << n << " isn't a prime number\n";

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " isn't a prime number" << endl;
                return;
            }
        }

        cout << n << " is a prime number!!!\n";
    }

```

</code>
</details>

----

----

> # ```Some other mathematics for implementation based problems```

* Even = divisible by 2
* Odd = can't be divisible by 2 => (even + 1) = 2 * some even number + 1 (Formula: $2n + 1$)
* Odd + Odd = Even
* Even + Even = Even
* Odd + Even = (even + 1) + even = even + 1 = odd

* Why 2 even and 2 odd number is an even number since we know that addition of an odd and an even is odd

  * Explanation: 2 even + 2 odd = 2 x (even + odd) = 2 x (odd) = odd + odd = even
  * So we can come into a decision that, $n$ x $(even + odd)$ = $n$ x $odd$
    * if $n$ is odd then the result will be odd
    * if $n$ is even then the result will be even

```
// Even odd using bit manipulation
    int even(int n) { return (!(n & 1)) ? 1 : 0; }
    int odd(int n) { return ((n & 1)) ? 1 : 0; }
```

----

> # ```Prime number```

**Prime number**: A number that has exactly two divisors or also said only has two factors is said to be a prime number.

**Primality Test [Counting factors algorithm]**: By counting how many divisors there in a number we can come into a decision if a given number is prime number or non-prime.  

* **Bruteforce**: Since we know a prime number can have only two factors or divisors, so we will iterate from 1 to till the given input number. if the count is two then it is prime else it is a non-prime number.
  * Time complexity: O(n)

* **Optimal Solution 1**: if a number, 'n' is divisible by i (can be any positive number) then 'n' can also divisible by $\frac{n}{i}$.

* Any number can divided by 1 and that specific number. So, if a number is prime number then it must have no factor between 2 to n - 1. To optimize we can fix the range. Assume a number 18, 18 can divisible by 1, 2, 3, 6, 9 and 18. The last number that divides 18 is 9 which is also $\frac{18}{2}$. So, we can construct a thought n / 2.

> # ```Modulo (%)```

* n % m = [0 - (m - 1)]
  * Modulo (m) of any number (n) would be result 0 to m - 1, that means, **(n % m) < m**
  * This trick could be use to avoid overflow of array size. Suppose you've an array of size 'n', the 'i' th element should be place at 'k'th index. Then, the formula would be, **n % n + k** to replace this in position 'k'. **This trick mostly used in cyclic rotation questions to reposition an element**.  
  **arr[(i + k) % n] = arr[i]**
  * 
