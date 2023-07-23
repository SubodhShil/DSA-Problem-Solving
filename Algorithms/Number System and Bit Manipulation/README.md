> # Number system

### **Decimal to binary conversion**

1. Divide the decimal number by 2 till it become 0 and the remainder formed in LSB to MSB is the binary converted sequence.
2. Trick: https://youtu.be/Z1hFwe97Hfg

### **Recognize even and odd number in binary representation**
1. An odd number has has last digit as 1 and and even number has last digit as 0.
```cpp
if(n & 1)
    cout << "Odd\n";
else 
    cout << "Even\n";
```

## **Bitwise operators**
1. **AND (&) operator**: All 1 result 1, any 0 result 0
2. **OR(|) operator**: All 0 result 0, any 1 result 1
3. **XOR(^)**: Any 2^k same values are truncated.
    ```cpp
    1^1^1^1 = (1^1)^(1^1) = 0
    1^1^1^1^1 = (1^1)^(1^1)^1 = 1
    ```
4. **NOT(~)**: 0 becomes 1, 1 becomes 0
5. 