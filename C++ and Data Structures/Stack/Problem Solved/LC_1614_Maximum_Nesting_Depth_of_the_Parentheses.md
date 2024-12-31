
---

> # [**LeetCode 1614. Maximum Nesting Depth of the Parentheses**](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/)

![](../Media/20241231072923.png)

<details>
<summary>Example 1</summary>

```cpp
Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.
```

</details>

<details>
<summary>Example 2</summary>

```cpp
Input: s = "(1)+((2))+(((3)))"

Output: 3

Explanation:

Digit 3 is inside of 3 nested parentheses in the string.
```

</details>

<details>
<summary>Example 3</summary>

```cpp
Input: s = "()(())((()()))"

Output: 3
```

</details>

&nbsp;

# **`Intuition`**

> ## Observation 1 (Stack solution):

<details>
<summary>Explanation</summary>

1. The depth is actually current count of opening parenthesis "(". Whenever we're getting "(" just push it to the stack.
2. Now, two case can be occurred that expression can contain number or only the parenthesis. When we encounter a closing parenthesis ')', we calculate the size of the stack (current depth) and update the maximum depth if this is greater than the previous maximum. Then, we pop the stack to indicate that one level of nesting is complete.
3. If there is no number contains then when ")" occurs we calculate the maximum depth. 


**Example Walkthrough**

Let's walk through an example: "((())())"

- Start: depth = 0, stack is empty  
- '(' -> push to stack, depth = 1  
- '(' -> push to stack, depth = 2  
- '(' -> push to stack, depth = 3
- ')' -> pop from stack, depth = 2
- ')' -> pop from stack, depth = 1
- '(' -> push to stack, depth = 2
- ')' -> pop from stack, depth = 1
- ')' -> pop from stack, depth = 0
The maximum depth was 3, which is our final answer.

</details>


### Solution

<details>
<summary>C++</summary>

```cpp
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        stack<char> st;

        for (auto ch : s) {
            if (ch == '(')
                st.push(ch);
            else {
                int sz = st.size();
                depth = max(depth, sz);
                if (ch == ')')
                    st.pop();
            }
        }

        return depth;
    }
};
```
</details>