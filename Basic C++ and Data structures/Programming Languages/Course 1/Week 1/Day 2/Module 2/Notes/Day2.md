# **```Module 02```**

## <p align="center"><b>Operators</b></p>

Take part in certain mathematical and data manipulative operations.

| Operator sign | Task of operator | Example |
| ---------------|:--------------:| ---------------:|
| +  | Addition | 1. **Mathematical**: 2 + 2 = 4; <br> 2. **String (Concatenation)**: "Subodh" + " Shil" = "Subodh Shil"   |
| - | Subtraction | 1. **Mathematical**: 100 - 50 = 50 <br> 2. **Character digit to int**: '8' - '0' = 8 (integer)  |
| * | Multiplication | 5 * 20 = 100 |
| / | Division | 300 / 20 = 15 |
| % | Reamainder | 300 % 20 = 0 |

<ins>**Operands**</ins>: are the numbers, variables or any other instances in which the operators execute it operations

## <p align="center"><b>Operation observation</b></p>

### ```Integer data type```

1. printf(int / int) = int
    - Example: ```printf(5 / 2);```. At first glimpse we thoght the result would be 2.5 but it would be result 2 since division between two integer number also results an integer number.
2. int identifier = int / int = int
    - Example: ```int x = (5 / 2);```. The result would be 2 since integer only stores non-fractional portion
3. int identifier = float / int or int / float = int or float / float = int
    - Example: ```int y = 12.5 / 3.2;``` 12.5 / 3.2 results 3.90625 in calculator but integer variable going to store only 3 as it is non fractional part.

### ```Float data type```

1. float identifer = (int / int) = int
    - Example: ```float x = (5 / 2);``` We expected this statement to result 2.5, but division of two integer always results an integer even you store that number into a float variable. To, acheive the fractions you need to either typecast to float or provide a fractional part. For instance, ```float x = float(5) / 2;``` Follow the following snapshot and observe how float behaves with various numbers:  
    <p align="center">
    <img src="./snap1.png">
    </p>

### ```Modulo Operator```

1. A % B = A if B > A
    - For example, ```cout << (10 % 11) << endl;``` results 10

2. A % B = C where the reuslt C is always lesser than B if and only if B < A
    - For example, ```cout << (109 % 99) << endl;``` result is 10. The result lesser than 99 since 100(A) is greater than 99(B).

3. In the both abovementioned case, we've seen that for any A % B = C, the result 'C' is always less than B.

&nbsp;

## ```Video 2-2 || Video 2-3```
