
---
## Question Statement

> A valid parentheses string is either empty ```""```,``` "(" + A + ")"``` or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

> For example, ```""```, ```"()"```, ```"(())()"```, and ```"(()(()))"``` are all valid parentheses strings.

> A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

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

## Intuition 
Observation:
1. Keep in mind that, the given parentheses string is already a valid parentheses string.
2. The only thing we have to do is keeping track or maintain a calculation of open and closing bracket and not include them in 


## Solution


### Think yourself, dry run and give the question 20 minutes.

<details>
<summary>C++</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

// Observation: The string is already a valid parenthesis
class Solution
{
public:
    string removeOuterParentheses(string s)
    {

    }
};

int main()
{

    return 0;
}

```
</details>

<details>
  <summary>Python</summary>
  
</details>