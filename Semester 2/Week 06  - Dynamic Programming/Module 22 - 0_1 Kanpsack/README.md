> # **```0/1 Knapsack```**

1. If we don't pick an item = weight will remain same
2. If we pick an item = weight will be truncated

## How to choose a base case?
- Fixed answer is the base of a recursion.
- যে parameter গুলোর value change হয় তাদের নিয়েই base case দিতে হয় ।   
The parameters who's values are chagned during the recursive call should be constrcuted as base case.


## Dimension of the dp array

> DP তে memoization এর জন্য যে array টি নেওয়া হবে সেটার dimension কি হবে তা এর base case এর উপর নির্ভর করে । যদি base case ১টি value নিয়ে হয় তাহলে dp array টি single diementional হবে, base case ২টি value এর উপর নির্ভর হলে dp array টি 2d array হবে, এভাবে যতবেশি element এর উপরে base case টা নির্ভর করবে dp array এর dimension তত বাড়তে থাকবে । 


