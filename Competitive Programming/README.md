> # **```Rules of approaching fast```**

1. Never stuck at overthinking  story statement. Try to observe testcase and expected output.
2. Always create your own testcase on first place. 
3. Think about edge cases and create testcases on the basis of edge cases. 
4. Time maintain your problem.

## **```How to get index of maximum and minimum element in an array```** 

Using vector container: 
```cpp
int maxElementIdx = max_element(a.begin(), a.end()) - a.begin();
int minElementIdx = min_element(a.begin(), a.end()) - a.begin();
```