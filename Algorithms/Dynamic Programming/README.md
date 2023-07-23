> # **```Dynamic Programming```**

## **```Those who can't remember the past are condemned to repeat the past.```** - ```Recursion```


DP is a better and optimized way to compute sub-results by memorizing or remembering previous results, which may occur frequently.

Where to apply DP?

1. **Optimal substructure**: A bigger problem can be express in terms of sub-problem or smaller-problem is known as optimal substructure. Example: **Divide and Conquer**.

    ```cpp
    Sum(6) = Sum(5) + 1
    ```

2. **Overlapping subproblems**: In a problem where subproblems occurs more than once is known as overlapping subproblems, these subproblems are quite inefficient to compute from scratch again.


Two methods of DP:
1. Tabulation (Bottom Up)
2. Memoization (Top Down)



