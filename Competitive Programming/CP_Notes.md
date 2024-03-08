1. GCD of any even number and 2 is **greater than 1**.
2. Find substring in a string:
   ```cpp
   string_identifier.find(b) != a.npos
   ```
   or,
   ```cpp
   string_identifier.find(b) != -1
   ```
3. Relation between, GCD and LCM is,
   ```cpp
    a x b = gcd(a, b) * lcm(a, b)
   ```


### Be careful of keywords like 'at most' in the question description. You don't need to do exact 'n' tasks strictly if it is mentioned with keyword 'at most'. 

### **```Manhattan distance```**


### **```Prime divisor```**

Prime factor is finding which prime numbers multiply together to make the original number. In prime factorization, keep going finding factor until all the factors become prime number only.  
For example, 100 = 10 x 10 = (5 x 2) x (5 x 2)
2 prime divisors, 5 and 2

১ এর বড় যেকোনো number কে prime factorization হিসেবে দেখানো যাবে । 

### **GCD of more than 2 numbers**
GCD is multiple of common factors 

https://www.geeksforgeeks.org/gcd-two-array-numbers/


### n % x = rem < x 
কোন সংখ্যা, n কে, x দ্বারা mod করলে remainder সবসময় 0 থেকে x - 1 এর মধ্যেই হবে । 

### Reversing using swap 
একটা string বা array কে swap করে reverse করতে total = n (n - 1) / 2 সংখ্যক swap করতে হবে । 

```cpp
int x; cin >> x;
vector<int> v = {1, 2, 3, 4, 4, 4, 5, 6};

int first_idx = n - distance(find(begin(v), end(v), x), end(v));
int last_idx = distance(find(rbegin(v), rend(v), x), rend(v)) - 1;
```

### Bitwise AND (&) operation
The observation indicates that if any AND operation with 1 always sustain the number as it (number & 1 = number) otherwise the number will decrease if AND operation with 0.


