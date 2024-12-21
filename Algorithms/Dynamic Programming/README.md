> # **`Dynamic Programming`**

## **`Those who can't remember the past are condemned to repeat the past.`** - `Recursion`

DP is a better and optimized way to compute sub-results by memorizing or remembering previous results, which may occur frequently.

Where to apply DP?

1. **Optimal substructure**: A bigger problem can be express in terms of sub-problem or smaller-problem is known as optimal substructure. Example: **Divide and Conquer**.

    ```cpp
    Sum(6) = Sum(5) + 1
    ```

2. **Overlapping subproblems**: In a problem where subproblems occurs more than once is known as overlapping subproblems, these subproblems are quite inefficient to compute from scratch again.

Two methods of DP:

1. **Memoization (Top Down)**: Tend to store the value of subproblems.
2. Tabulation (Bottom Up)

In order to convert a recursion into a DP solution:

1. Declare an array
2. Check if the sub-problem previously computed in the array
3. If the sub-problem not been solved then solve and store in the array.

## Top down

-   Find out result from the required answer (given as input) and go till the base case.

## Bottom up

-   Start it from the base case the and go to the required answer (that is given as input)

## Question pattern

-   Keywords and phrases such as **Try all possible ways, count ways, count distinct/unique ways or best ways to count..** these problems are usually solved using DP.
-   
