> # ```Algorithm```

## <p align="center"><b>Algorithm analysis</b></p>

1. Time complexity
2. Space complexity
3. Network consumption
4. Power cosumption
5. CPU register

## <p align="center"><b>Frequency count method</b></p>

Counting the number of time an operation or instruction or statement has executed under an algorithm is frequency count method.

* Each statement take 1 unit of time to execute.
* Time complexity dependend upon input 'n'.
* Space counted on how many variables there in the program.

```
function add(a, b)
{
    a := 10         -----➤ 1 Unit
    b := 20         -----➤ 1 Unit
    c := a + b      -----➤ 1 Unit
    return c        -----➤ 1 Unit
}
-------------------------------------
Total time:                 4 Unit
                    f(n)    = 4 x 1 Unit
                            = 4 x n^0
                    f(t)    = n^0
                            = O(1)
```

### **6 sections of a C or C++ program**

1. Documentation section
2. Link section
3. Definition section
4. Global declarations section
5. Main function
6. User defined section

## <p align="center"><b>Complexity analysis of multi-dimensional array</b></p>

* The number of nested loops required to iterate over an array increases with the number of dimensions of the array. For example:
  * A 1-dimensional array can be iterated over with a single for loop.
  * A 2-dimensional array can be iterated over with two nested for loops.
  * A 3-dimensional array can be iterated over with three nested for loops.

<ins>**Practice: Calculate the time complexity of the following multi-dimensional array**</ins>

```
int A[5][3][4][10];
```

Here array is a 4D array. So, to traverse through the array we require 3 inner loop and total 4 nested loop.

```
for(i = 0; i < 5; ++i)                  -----➤ n
    for(j = 0; j < 3; ++j)              -----➤ n * n
        for(k = 0; k < 3; ++k)          -----➤ n * n * n
            for(l = 0; l < 3; ++l)      -----➤ n * n * n * n

                                        ______________________________________
                                        f(t) = O(n) + O(n^2) + O(n^3) + O(n^4)
                                        Degree of a polynomial = 4
                                        Time complexity = O(n^4)
```

## <p align="center"><b>Loop and complexity analysis</b></p>

The **loop** is a prominent and key component to design algorithms.

```
for(int i = 1; i <= 10; ++i)
    cout << "I love Bangladesh\n";
```

Iteration is a count how many time a statement encounters iteself or repeats itself until a specific condition met.

First of all, focus on the iterations it will take in the loop. On first glance, it seems to take 10 iterations. Isn't it?
Wrong!! The loop has initialized with value 1 and last until 10. So, counting from 1 till 10 (10 is included since it says less then equals to 10): 1, 2, 3, 4, 5, 6, 7, 8, 9, 10. But notice one thing after finishing iteration number 10 it will come back to the increment the value of **'i'**. Value of **i** is now 11, it will now check for condition and the condition says i <= 10, placing 11 in 'i' this will results, 11 <= 10. Which is false thus the loop stop processing. So, total time the for loop iterates is 11.

### Remember, If a for loop has executed **'n'** iterations but it will require one more iteration to fail the loop (even though the statement will not be executed since the condition will fail), then the total expected iteration count is **n + 1**  

### Count iteration

| Iteration | Condition | Similar Condition | Total iterations | Explanation|
| --- | --- | --- | --- | --- |
| i = 0 | i <= 10 | i < 11 | 12 | Starts from 0 stops in when i become 11, and 0 to 11 is total 12 numbers. |
| i = 0 | i < 10 | i <= 9 | 11 | Starts from 0 and condition says < 10 means stop at 9, 0 to 9 is total 10 numbers and one extra iteration to condition fail the loop |
| i = 1 | i < 20  | i <= 19| 20 |
| i = -1 | i <= 10 | i < 11 | 13 |
| i = -1 | i < 11 | i <= 10|  13 |
| i = 10 | i >= 1 | i > 0 |  11 |

Formula:

1. If condition is <= n (less than or equals to n) then, ```n - i + 2```
2. If condition is < n (less than n) then, ```n - i + 1```
