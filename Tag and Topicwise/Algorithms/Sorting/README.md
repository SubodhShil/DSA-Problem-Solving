> # ```Selection Sort```

&nbsp;

> # ```Merge Sort```

Merge sort has a better time compleixty as compared other popular.
Time complexity of merge sort is O(N log N)
The algorithm that costructs the algorithm is 'Divide and Conquer' or 'Divide and Merge' algorithm.

**Phase 1**: Divide the array until it become an individual element, since single element can't be further divided.

**Phase 2**: Merge or conquer pair of elements in a way that is either sorted in ascending or descending.

**Phase 3**:

&nbsp;

# **<p align="center">```Non-comparison based algorithm```</p>**

Previous sorting algorithms were based on comparing between elements. Following algorithms aren't revolve around comparisons rather utilizes different approaches to sort.

> # **```Count Sort```**

Counting sort is a non-comparison based algorithm that works if a particular range of value is given. In the case that, if the range is not defined, traverse the array and find the maximum value, upperbound of the range.

* Counting sort isn't an in-place algorithm.
* Find the largest element appearing in the array.
* Create a frequency array, and store frequencies of the array elements.
* Now start traversing the frequency array (from left if intent is ascending order sorting) where index treated as value of the original array and corresponding index value of frequency array is the number of time the value appeared in the original array. The algorithm places the value that many time in the original array until the entire frequency array has been traversed.

Once the frequency array has been traversed, the original array will be sorted but this lacks the stability or concurrent order of frequent elements.

## **Stable count sort**

By using prefix sum algorithm stability can be acheived.

❓ Queries

1. How the frequency array of the count sort will store negative numbers.

> # **```Radix Sort```**

Radix sort is a non-comparison based algorithm.

1. It's a digit by digit sorting algorithm.
