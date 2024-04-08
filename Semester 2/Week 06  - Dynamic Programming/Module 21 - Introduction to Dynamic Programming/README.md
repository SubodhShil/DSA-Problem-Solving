> # **```Dynamic Programming```**

### DP is a optimized version of recursion.
## When to use DP?
1. Choice -> Recursion 
2. When question said compute various way or "in how many ways to generate" something.
3. If there can be multiple results of a problem, and various way or combination to get a result, then DP should be used.
4. Optimization 
   1. Maximum value or result
   2. Minimum value or result
   3. Get longest value or result
   4. Get small value or result

## How to choose a base case?
- Fixed answer is the base of a recursion.
- যে parameter গুলোর value change হয় তাদের নিয়েই base case দিতে হয় ।   
The parameters who's values are chagned during the recursive call should be constrcuted as base case.

<ins>**Memoization**</ins>: A technique to optimize recursive algorithms by storing intermediate results. DP memoization uses recursion technique. This technique also known as top-down approach.  

<ins>**Tabulation**</ins>: DP tabulation uses iterative technique. This technique also known as bottom-up approach.  

## Which DP technique to use and why? 
> The memoization technique uses recursion which takes up internal stack memory fragement or call stack. But unlike stack memory halted during the process of memoization technique, the tabulation approach works directly without assistance of any external memory. There may be chances (although limited) memory to be overflowed in recursive DP or memoization. So, it is recommended use tabulation or bottom-approach.

