> # ```Binary Search```

## **Rule of thumb**

Any search based problem could be solve within binary search algorithm if it has a monotonic search space.

**When to apply binary search?**

1. If asked for search in a sorted array
2.

### **Note**  

We've seen using ```mid = start + (end - start)/2```
to find mid index of the array. Why don't using simple, ```mid = (end - start) / 2``` to do the same task?  
Ans: if both start and end value is set to highest value of integer (INT_MAX) then addition of start and end will overflow the range. So, we have to modify the equation to overcome the overflow.
