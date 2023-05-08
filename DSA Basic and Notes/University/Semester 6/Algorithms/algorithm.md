> # ```Algorithm```

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

1. If condition is <= (less than equals to zero) then, ```n + 1 - i + 1```
2. If condition is < (less than) then, ```n - i + 1```
