# ```Time Complexity```

### **What is time complexity?**  

<ins>Myth buster</ins>: Time taken by an algorithm isn't time complexity.  
Time complexity is a mathematical approach to compute how an algorithm will behave overtime as input grows. So, it is a mathematical notation to indicate hypothetical time consumption as per more input add on.

<ins>**Definition**</ins>: Function that give us the relationship about how the time will grow as the input grows.

### **So why don't we just mesaure time complexity in more human readable unit forms like cm, km etc?**

> Because the resources of each machine differs. Even if, we have same configuration of machines but it still can shows different time consumption to execute an algorithm. Meanwhile, different algorithms are not tend to compared for mesauring performance distinction. Performance still can acheived by enriching machine configuration. But it is most important to validate an algorithm is that futureproof if a huge overload of input occurs.

**Observations**:

1. Sometime it may occur that, a good algoritm (algorithm with less TC) run slow or same, as compare to a less performant algorithm. It is because, the input may very small and less performant algorithm in that case will be performe, but in case if input grows extensively this will ruins performance. So, it depends case to case, where and when should implement an algorithm. That is because, complexity analysis is very crucial.

2. In time complexity we don't care about smaller inputs rather we look forward to extensive input whether it would occur blunder and running slow an algorithm.

**Consideration**:

1. Always look forward to worst test complexity.

&nbsp;

## <p align="center"><b>Complexity analysis of some code snippets </b></p>

**Snippet #1**

```
    for(i = 0; i < n; i++)
    {
        // codes here;

        statement1;
        statement2;
    }
```

---

Time Complexity: O(N)

---
