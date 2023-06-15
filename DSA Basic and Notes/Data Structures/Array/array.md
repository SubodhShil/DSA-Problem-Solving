> # **```Subarray```**

- Subarray is said to be contiguous subarray, since the index of a subarray is continuous and sequential.

- A subarray includes
  - individual elements of an array
  - the full length of the array or the array itself
  - a continuous part of an array

- the difference between two index should not exceed 1.

The formula to calculate the total number of subarrays that an array of length n can generate is:

Total number of subarrays = n * (n + 1) / 2

A full length size or the full array itself consider to be a subarray.

```
A[1,2,3]
```

The subarrays are:

```
{1}, {2}, {3}, {1,2}, {2,3}, {1,2,3}
```
