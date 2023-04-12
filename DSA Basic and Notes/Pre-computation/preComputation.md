> # ```Pre-Computation```

Pre-computation refers to computes or generate some result in advance and keep them in somewhere (data structure like array). Later on, we can just use them by invoking.

## **Hashing**

Hashing is a pre-computation technique to storing frequency of a data value.

## **Sliding window**

Sliding window is yet another pre-computation technique. The sliding window technique could be used to reduce nested loop. We can solve problems with following terms using sliding window:

    1. Array or string
    2. Sub-array or sub-string
    3. Largest sum
    4. Maximum sum
    5. Minimum sum

**Sliding window algorithm**:  

    1. Compute sum of first k elements (index 0 till k)
    2. While increasing i,  sum = sum - a[i - 1] and
                            sum = sum + a[i + k - 1]

A sliding window of size 3 would run over it like:  
[ a b c ]  
&emsp;  [ b c d ]  
&emsp;&emsp;    [ c d e ]  
&emsp;&emsp;&emsp;  [ d e f ]  
&emsp;&emsp;&emsp;&emsp;    [ e f g ]  
&emsp;&emsp;&emsp;&emsp;&emsp;  [ f g h ]  
In the example, it demonstrates how a 3 element array implicates sliding window technique. For each step, the window slides but, the difference between two consecutive steps the difference is only one element. In the first step we have to work with element: a, b, c and in the second step b, c, d. In the second step we've to add an element d and delete element a.
