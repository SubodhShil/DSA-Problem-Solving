## XOR (^)
0 এর সাথে কোন bit এর XOR করলে কোন পরিবর্তন হয় না । 

```cpp
x ⊕ 0 = x
x ⊕ x = 0
```

## AND (&)

- AND operation অনেকটা গুণ করার মতো,
```cpp
0 & 0 = 0  likely, 0 x 0 = 0
0 & 1 = 0  likely, 0 x 1 = 0
1 & 0 = 0  likely, 1 x 0 = 0
1 & 1 = 1  likely, 1 x 1 = 1

These rules can be applicable for AND operation among more than two bits,
1 & 1 & 0 & 1 & 1 = 0 
Similar to, 1 x 1 x 0 x 1 x 1 = 0
```

- n এর সাথে x এর bitwise AND (&) করলে সেটা কখনও n থেকে বড় হবে না । মানে AND operation করলে value বাড়ে না । 
```cpp 
n & x <= n
```

