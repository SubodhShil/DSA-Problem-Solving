> # **```Binary Search```**

Searching in an array can cost linear time with most naive full length array searching. By utilizing binary search algorithm we could be cut down the time complexity of to a logarithmic complexity if the array is sorted.

### **Question pattern**: Typically questions related to binary search mention the keyword "sorted" in their description.

1. If the array is sorted, determine the mid value and compare it with the target value you're looking for. 
2. If the target is not matched to the middle value, then it may be left or right side. Determine which side it should and discard the other side. 
   1. 

**Mid value overflow**: We determine mid vlaue by adding first and last index value, after that the result is divided by 2. But it could be possible that addition of those two index values overflows the range. So, mathematically we use another formula 

## Binary Search on Answer
Given array is not sorted