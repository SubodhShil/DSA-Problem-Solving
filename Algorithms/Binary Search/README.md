> # **```Binary Search```**

Searching in an array can cost linear time with most naive full length array searching. By utilizing binary search algorithm we could be cut down the time complexity of to a logarithmic complexity if the array is sorted.

### Depend on array order binary search has three variations: 
1. **Ascending order binary search**: On the left side of mid has the smaller values, and on the right of the mid it contains higher values.
   ```cpp
   ....
   ....
      else if (array[mid] > target)
         end = mid - 1;
      else
         start = mid + 1;
   ....
   ....
   ```
2. **Descending order binary search**: Left side of mid has higher value and right side of mid has higher values. 
   ```cpp
   ....
   ....
      else if (array[mid] > target)
         start = mid + 1;
      else
         end = mid - 1;
   ....
   ....
   ```
3. **Order-agnostic array**:
   ```cpp
   ....
   ....
      else if ((arr[mid] > target && arr[start] > arr[end]) 
               || (arr[mid] < target && arr[start] < arr[end]))
         start = mid + 1;
      else
         end = mid - 1;
   ....
   ....
   ```

### **Question pattern**: Typically questions related to binary search mention the keyword "sorted" in their description.

1. If the array is sorted, determine the mid value and compare it with the target value you're looking for. 
2. If the target is not matched to the middle value, then it may be left or right side. Determine which side it should and discard the other side. 
   1. 

**Mid value overflow**: We determine mid vlaue by adding first and last index value, after that the result is divided by 2. But it could be possible that addition of those two index values overflows the range. So, mathematically we use another formula:
```cpp
mid = start + (end - start) / 2
```

## Binary Search on Answer
Given an array is not sorted but binary search algorithm is still be applicable but but it requires a suitable criteria or condition for conducting the binary search.

