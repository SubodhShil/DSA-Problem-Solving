### When we use DP?

-   Is this a recursive problem?
-   When overlapping subproblem appears.
-   Try all possible ways.

-   DP doesn't work when the recursive tree occurs a cycle. For example,

    ```cpp
    f(i) {
        f(i - 1);
        f(i + 1);
    }
    ```

-   Two types of DP
    -   Iterative (Top down approach)
    -   Recursive (Bottom up approach)

Solving procedures:

1.

Steps (DP):

1. Base case
2. Check already stored or saved in the memoization array or table.
3. If not saved, calculate it and also save it to the memoization array.

### Question patterns

1. Count the number of ways.
2. Figure out the best way to solve.
3. Multiple of ways of doing something, find the minimum or maximum value or output.

### Bicolor or bipartite

-   No internal connection between two same color node.
-   No two same color are adjacent.
-   Even length এর cycle থাকলে সেটা bipartite graph বা bicolored হবে ।
-   
