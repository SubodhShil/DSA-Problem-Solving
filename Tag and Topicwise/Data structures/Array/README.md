> # **```Subarray```**

- Subarray is said to be a contiguous portion of an array.

- A subarray includes
  - individual elements of an array
  - the full length of the array or the array itself
  - a continuous part of an array

### **Observations**

1. the index of a subarray is continuous and sequential
2. the difference between two index should not exceed 1
3. For an array/string of size n, there are <ins>n*(n+1)/2</ins> non-empty subarrays/substrings.

A full length size or the full array itself consider to be a subarray.

```
A[1,2,3]
```

The subarrays are:

```
{1}, {2}, {3}, {1,2}, {2,3}, {1,2,3}
```

&nbsp;

> # **```Subsequence```**

The subsequence of an array is obtained by deleting one or more or no element without changing the actual order of the remaining elements.

### **Observations**

1. May or may not be a contiguous part of an array.
2. For a sequence of size n, we can have 2^n-1 non-empty sub-sequences in total.

&nbsp;

> # **```Subset```**
