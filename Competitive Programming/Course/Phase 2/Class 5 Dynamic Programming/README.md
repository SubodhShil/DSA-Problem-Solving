- DP doesn't work when the recursive tree occurs a cycle. For example, 
    ```cpp
    f(i) {
        f(i - 1);
        f(i + 1);
    }
    ```

- Two types of DP
  - Iterative (Top down approach)
  - Recursive (Bottom up approach)



