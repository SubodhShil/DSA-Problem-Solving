# **```Sliding Window```**
<ins>**The sliding window itself a pre-computational technique**</ins> to overcome repetational computation. The "window" here used to represent a portion or sub-array of the actual array.

### How the window slides
- Iterate until it matches to the window size.
- After window size matches to slide the window, it will simply add a new element from back and remove the first element from the previous window. 

## Identify the pattern
> The algorithm is applicable to contiguous data structures like **Array** and **String**. Since the algorithm works with continuous part of an array or string, so the question that has such keyword like **'subarray'**, **'substring'**, **'largest'**, **'minimum'** and an extra variable such as **'k'** refers the window size or target, indicates this pattern.

### The variable **k** refers to the subarray size.

## Variants of sliding window algorithm
1. Fix sized window: The window size will be provided.
2. Variable size window: We ourself have to determine the window size.

## **Sliding Window Template**
```cpp
        int l = 0, r = 0, n = nums.size(), something = 0;

        for (; r < n; ++r)
        {
            for (; windowInvalid(); ++l)
            {
                // codes
            }
        }

        return something;
```

## **Observation**: Sliding Window vs Kadane's Algorithm

Sliding window technique is applicable only if we're give a fixed size window or can determine a variable size window or subarray size. In contrast, if the question doesn't mention any window size or subarray size then we must apply **Kadane's algorithm** to find maximum or minimum subarray sum.

