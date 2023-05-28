> # ```Algorithm```

## <p align="center"><b>Algorithm analysis</b></p>

1. Time complexity
2. Space complexity
3. Network consumption
4. Power cosumption
5. CPU register

Auxiliary space complexity is the amount of additional space that an algorithm uses, in addition to the space required to store the input data. This additional space is typically used to store temporary data structures or variables that are needed during the execution of the algorithm.

The auxiliary space complexity of an algorithm is typically expressed using big O notation. For example, an algorithm with O(1) auxiliary space complexity uses a constant amount of additional space, regardless of the size of the input data. An algorithm with O(n) auxiliary space complexity uses a linear amount of additional space, which is proportional to the size of the input data. Algorithms with lower auxiliary space complexity are more efficient and require less memory.

**Pseudocode**: Pseudocode is a programming language-agnostic way to write algorithms. It does not abide by any specific syntax, and instead implicate human-readable language to write algorithmic steps.

## <p align="center"><b>Frequency count method</b></p>

Counting the number of time an operation or instruction or statement has executed under an algorithm is frequency count method.

* Each statement take 1 unit of time to execute.
* Time complexity dependend upon input 'n'.
* Space counted on how many variables there in the program.

```
function add(a, b)
{
    a := 10         -----➤ 1 Unit
    b := 20         -----➤ 1 Unit
    c := a + b      -----➤ 1 Unit
    return c        -----➤ 1 Unit
}
-------------------------------------
Total time:                 4 Unit
                    f(n)    = 4 x 1 Unit
                            = 4 x n^0
                    f(t)    = n^0
                            = O(1)
```

### **6 sections of a C or C++ program**

1. Documentation section
2. Link section
3. Definition section
4. Global declarations section
5. Main function
6. User defined section

## <p align="center"><b>Complexity analysis of multi-dimensional array</b></p>

* The number of nested loops required to iterate over an array increases with the number of dimensions of the array. For example:
  * A 1-dimensional array can be iterated over with a single for loop.
  * A 2-dimensional array can be iterated over with two nested for loops.
  * A 3-dimensional array can be iterated over with three nested for loops.

<ins>**Practice: Calculate the time complexity of the following multi-dimensional array**</ins>

```
int A[5][3][4][10];
```

Here array is a 4D array. So, to traverse through the array we require 3 inner loop and total 4 nested loop.

```
for(i = 0; i < 5; ++i)                  -----➤ n
    for(j = 0; j < 3; ++j)              -----➤ n * n
        for(k = 0; k < 3; ++k)          -----➤ n * n * n
            for(l = 0; l < 3; ++l)      -----➤ n * n * n * n
                                        ______________________________________
                                        f(t) = O(n) + O(n^2) + O(n^3) + O(n^4)
                                        Degree of a polynomial = 4
                                        Time complexity = O(n^4)
```

**Square matrix**
A matrix having equal number of rows and columns is said to be a square matrix.

## <p align="center"><b>Loop and complexity analysis</b></p>

The **loop** is a prominent and key component to design algorithms.

```
for(int i = 1; i <= 10; ++i)
    cout << "I love Bangladesh\n";
```

Iteration is a count how many time a statement encounters iteself or repeats itself until a specific condition met.

First of all, focus on the iterations it will take in the loop. On first glance, it seems to take 10 iterations. Isn't it?
Wrong!! The loop has initialized with value 1 and last until 10. So, counting from 1 till 10 (10 is included since it says less then equals to 10): 1, 2, 3, 4, 5, 6, 7, 8, 9, 10. But notice one thing after finishing iteration number 10 it will come back to the increment the value of **'i'**. Value of **i** is now 11, it will now check for condition and the condition says i <= 10, placing 11 in 'i' this will results, 11 <= 10. Which is false thus the loop stop processing. So, total time the for loop iterates is 11.

### Remember, If a for loop has executed **'n'** iterations but it will require one more iteration to fail the loop (even though the statement will not be executed since the condition will fail), then the total expected iteration count is **n + 1**  

### Count iteration

| Iteration | Condition | Similar Condition | Total iterations | Explanation|
| --- | --- | --- | --- | --- |
| i = 0 | i <= 10 | i < 11 | 12 | Starts from 0 stops in when i become 11, and 0 to 11 is total 12 numbers. |
| i = 0 | i < 10 | i <= 9 | 11 | Starts from 0 and condition says < 10 means stop at 9, 0 to 9 is total 10 numbers and one extra iteration to condition fail the loop |
| i = 1 | i < 20  | i <= 19| 20 |
| i = -1 | i <= 10 | i < 11 | 13 |
| i = -1 | i < 11 | i <= 10|  13 |
| i = 10 | i >= 1 | i > 0 |  11 |

Formula:

1. If condition is <= n (less than or equals to n) then, ```n - i + 2```
2. If condition is < n (less than n) then, ```n - i + 1```

&nbsp;

## <p align="center"><b>Sorting algorithms</b></p>

A good sorting algorithm has the following characteristics:

1. Time complexity
2. Space complexity
3. Stability

### **Stability of an algorithm**

Stability of an algorithm is a measurement that ensures how an algorithm will preserve the order of duplicate elements even after it's execution.

Suppose, we have an unsorted array:  
**[5, 2, 3, 4, 7, 4]**  
Order of first 4 occurred at index 3  
Order of second 4 occurred at index 5  

<ins>After the sorting</ins>  
**[2, 3, 4, 4, 5, 7]**  
Order of first 4 currently at index 2 previously 3  
Order of second 4 currently at index 3 previously 5  

So, the order is consistent after sorting, so the algorithm is a stable algorithm.  
![stable_algorithm](./Media/algo4.png)

&nbsp;

**Upper bound and lower bound:**

An algorithm can run on different complexity based on different input size, input type or any other input scenario. So, there is no constant complexity or predefined behaviour of an algorithm's time complexity. That is why time complexity of an algorithm divides into three segments:

1. Upper bound: Also known as wrost case complexity. Better way to say Big oh.
2. Lower bound: Also known as best case complexity. Better way to Big omega.
3. Average bound: Better way to say Big theta. <ins> We can represent an algorithm with an average bound if and only if the algorithm's upper bound and lower bound are asymptotically equal.</ins>

Here are some examples of upper and lower bounds of common algorithms:

1. Bubble sort: Upper bound: O(n^2), Lower bound: O(n)
2. Quicksort: Upper bound: O(n log n), Lower bound: Ω(n log n)
3. Merge sort: Upper bound: O(n log n), Lower bound: Ω(n log n)
4. Heap sort: Upper bound: O(n log n), Lower bound: Ω(n log n)

**Why we need to know upper bound and lower bound?**  
Understanding the upper bound and lower bound of an algorithm's time complexity is important for several reasons.

The bubble sort algorithm takes O(n^2) in wrost case, whereas the best-case scenario for bubble sort is O(n), where the input list is already sorted, requiring only a single pass to confirm the sorted order. If we have input that end up giving us O(n) complexity then we can go for bubble sort because all other sorting algorithm has O(n log n) for both upper and lower bound.

&nbsp;

## <p align="center"><b>Recurrence Relation</b></p>

A function that calls itself for a certain amount of time
is a recurrence relation.

**What is the recursive tree?**

Question 1: calculate the time complexity of the following algorithm

```cpp
void printNum(int a)
{
    if(a > 0)
    {
        printNum(a - 1);
        cout << a << endl;
    }
}
```

**In every step of the function calling itself by decreasing the input size by 1.**

Put n = n - 1,  
T(n - 1)    = T((n - 1) - 1) + 1
            = T(n - 2) + 1

Put n = n - 2,  
T (n - 2)   = T ((n - 2) - 1) + 1
            = T (n - 3) + 1

&nbsp;

## <p align="center"><b>Divide and conquer</b></p>

The divide and conquer is an algorithm design paradigm to solve complex problems. It consists of three steps to get the solution:

**Divide:** Dividing a problem recursively into multiple small portions (sub-problems), until the smallest possible portion become so simple to solved directly.

**Conquer:** The conquer process is responsible for dividing sub-problems furthermore simplier versions.

**Combine:** This step of the algorithm will decompose all results generated from each sub-problems.

### <ins><p align="center"><b>Binary Search</b></p></ins>

Requirement: The array needs to be in sorted order.

**Complexity analysis:**

1. In every iteration, the array breaks into two parts and decide in which part it should continue the target element. So, here we're dividing our array size by 2.
2. The loop terminates when there a single element remain similar to the target element we're looking for.
