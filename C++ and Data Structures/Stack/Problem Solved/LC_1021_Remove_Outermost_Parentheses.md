
---
# **`Question Statement`**

> ## [**LeetCode 1021. Remove Outermost Parentheses**](https://leetcode.com/problems/remove-outermost-parentheses/)

> A valid parentheses string is either empty ```""```,``` "(" + A + ")"``` or A + B, where A and B are valid parentheses strings, and + represents string concatenation.
> 
> For example, ```""```, ```"()"```, ```"(())()"```, and ```"(()(()))"``` are all valid parentheses strings.
>
> A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.
>
> Given a valid parentheses string s, consider its primitive decomposition: ```s = P1 + P2 + ... + Pk```, where Pi are primitive valid parentheses strings.
Return ```s``` after removing the outermost parentheses of every primitive string in the primitive decomposition of ```s```.

<details>
<summary>Example 1</summary>

```cpp
Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
```

</details>

&nbsp;

# **`Intuition`**

> ## Observation 1 (String only solution):

<details>
<summary>Explanation</summary>

1. Keep in mind that, the given parentheses string is already a valid parentheses string.
2. The only thing we have to do is keeping track or maintain a calculation of open and closing bracket and not include them in the result string.

</details>


### Solution

<details>
<summary>C++</summary>

```cpp
// Time Complexity:
// Space Complexity: 
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int cnt = 0;
        string result = "";

        for (auto i : s)
        {
            if (i == '(')
            {
                if (cnt > 0)
                    result += i;
                ++cnt;
            }
            else
            {
                if (cnt > 1)
                    result += i;
                --cnt;
            }
        }

        return result;
    }
};
```
</details>


> ## Observation 2 (Stack solution):

<details>
<summary>Explanation</summary>

1. When the stack is empty this indicates that any upcoming parenthesis is the outermost parenthesis. So, when the stack is not empty only then add the parenthesis to the result string. 
2. For closing tag, we will delete from stack if it is not the outermost parenthesis. The stack size is 1 indicates stack only contains outermost "(". So, delete from the stack and add to result when the stack has size more than 1. 

</details>


### Solution

<details>
<summary>C++</summary>

```cpp
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        stack<char> st;

        for (char ch : s) {
            if (ch == '(') {
                if (!st.empty())
                    res += '(';
                st.push('(');
            } else {
                if (st.size() > 1)
                    res += ')';
                st.pop();
            }
        }

        return res;
    }
};
```
</details>


