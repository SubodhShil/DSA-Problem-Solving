### Longest Common Supersequence

1. A super-sequence is a type of string that contains all characters from both strings. 
2. Longest common supersequence is the concatenation of two strings. 
3. Length of a super-sequence = (addition of two string lengths - length of LCS string)

### Print **Longest Common Supersequence**
1. If i-th and j-th character are similar than we will move to corner.
2. If i-th and j-th character doesn't match, then we will compare maximum value between i-th and j-th index and go to that index.
   - If both i-th and j-th values are similar then we can go to any way. But before you choose any way the character at the ignored index should be include to the answer string.

