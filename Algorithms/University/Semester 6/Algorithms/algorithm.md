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

| Iteration | Condition | Similar Condition | Total iterations | Explanation                                                                                                                          |
| --------- | --------- | ----------------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------------ |
| i = 0     | i <= 10   | i < 11            | 12               | Starts from 0 stops in when i become 11, and 0 to 11 is total 12 numbers.                                                            |
| i = 0     | i < 10    | i <= 9            | 11               | Starts from 0 and condition says < 10 means stop at 9, 0 to 9 is total 10 numbers and one extra iteration to condition fail the loop |
| i = 1     | i < 20    | i <= 19           | 20               |
| i = -1    | i <= 10   | i < 11            | 13               |
| i = -1    | i < 11    | i <= 10           | 13               |
| i = 10    | i >= 1    | i > 0             | 11               |

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

&nbsp;

## **```Optimization problem```**
An optimization problem is a kind of problem that requires to have a best possible solution from a set of possible solutions. 
Here are some popular algorithms that are used to solve optimization problems:

## <p align="center"><b>Greedy Algorithm</b></p>


### **Drawbacks or problems with Greedy method:**
1. Greedy algorithms make locally optimal choices at each step, hoping that these choices will lead to a globally optimal solution.
2. They make the best possible decision at each step without considering the overall effect on the final solution.
3. Greedy algorithms are generally simple, easy to implement, and have low time complexity.
4. However, greedy algorithms do not guarantee an optimal solution in all cases and may lead to suboptimal results.
5. Greedy takes decision in a single pass imedietly. 

> ## **```Minimum Spanning Tree (MST)```**
A MST is a tree derived from a graph whose total cost is minimized by summing the weights of any arbitrary (vertices - 1) edges.

Here are some coditions to be fulfilled to be a MST:  
- It is a subset of a graph, also said to be a subgraph. Since MST is a tree, so the subgraph shouldn't have any cycle in it.
- It should contain all vertices of the graph, which it has derived. 
- Should contain no cycle.
- All vertices are connected, while minimizing the total edge weight or cost.
- No new edges can be added or removed.

Suppose we have a graph as below:  
![](./graph1.png)  
The graph properties are, **G(V, E) = (4, 4)**, where **V** is number of vertices and **E** refers to number of edges.  

We have to form a MST, **S'** such that, 
**S'(V', E') = S'(V, |V| - 1)** 

**Algorithms to find MST**: 
## <p align="center">1. Prims algorithm</p>
1. Delete self loop from the graph.
2. Delete maximum parallel edges from the graph.
3. Can't have any cycle.  
4. Select any edge includes two vertex from the graph.
5. The furtherest edges that to be selected, will also be minimum among the vertices includes in the selected edge for the MST.

## <p align="center">2. Kruskal algorithm</p>

**Algorithm**: Always select the minimum cost edge in the graph, but if it is creating a cycle or loop then don't select and proceed to the next minimum cost edge.

While implementing the algorithm it seems very to the point, until and unless cycle comes into picture. To handle whether our selected edge is creating a cycle or not we've to utilize a different type of data structure namely **DSU**.

### **Disjoint Set Union (DSU)**
It is a data structure that primarily used with Kruskal's algorithm that help us to find cycle in undirected graph. 

It has three functions:
1. **make()**: Adds new independent node (that is not yet connected) to existing group.
2. **find()**:  Return the parent of the group.
3. **union()**: Submerges two group into a single group.


> ## **```Single Source Shortest Path Algorithm```**
Single source shortest path algorithm suggests to find a path or way from a source node to destination node with a minimum possible distance.

Since here we have to minimize value this problem can solved using greedy approach. 

## <p align="center">1. Dijkstra (shortest path) algorithm</p>

**Source node**: The very first node represented as **source node** or starting point or initial stage.

**Destination node**: The last node known as destination node or end point or final stage. 

In the best case scenario, there might be one or multiple single source direct paths from source to destination. In this case, we have to select the minimum cost or shortest path, and that will be our result.

On the contrary, there might no single source direct path between source to destination. In this case, we've to go to our destination by using other paths also known as "via nodes". 

Formula for relaxation,
```cpp
    f(d(u) + c(u, v) < d(v))
        d(v) = d(u) + c(u, v)
```

1. Dijkstra algorithm doesn't works with negative weights.


## <p align="center">2. Optimal merge pattern</p>

## <p align="center"><b>Dynamic Programming</b></p>

- Dynamic programming is all about solving a sub-problem once and remembering its result and reuse when they appears again.
  
- Dynamic programming works on **principle of optimality**. So, minimization or maximization problems can be solved using DP.

- Dynamic programming sovles problem by taking **sequence of decisions**.

Popular algorithms:

## <p align="center">**Bellman-Ford Algorithm**</p>

> ## **```All pair shortest path```** 

Previously we've learned about single source shortest path, where we start from a specific source node and find the shortest path till destination. But here all pair shortest path doesn't have a source node, we've to consider shortest path from every nodes.

Find all pair shortest path using greedy algorithms: 

Here, we already learned about **Dijkstra algorithm**, which has the complexity of **O(E log V)**. But, dijkstra algorithm works on a single node to destination node and if we implement this algorithm to all pair shotest path it will take,  
**V * E log V = V * V^2 log V = V^3 log V** which is quite inefficient. 

On the other hand, **Bellman-Ford** reqiures **V^4** to solve 

To solve this particular problem we can utilize **Floyd-Warshall** algorithm.

## <p align="center">**Floyd-Warshall Algorithm**</p>

1. Travelling Salesman Problem (TSP)
2. Longest Common Subsequence (LCS)

### Multistage graph
A multistage graph is a directed weighted graph with a special property of having stages (set of nodes or vertices), where no vertices from a similar stage has edge between them. 

**Source node**: The very first node represented as **source node** or starting point or initial stage.

**Destination node**: The last node known as destination node or end point or final stage. 

<ins>**Our task is to reach to the destination node starting from the source node within minimum cost.**</ins>


## **```Suitable DS for various algorithm```**

### <ins>**Choosing DS for Prim's algrithm**</ins>

Since Prim's is a greedy algorithm to find minimum cost spanning tree. In greedy it consider locally optimal result, so each step we have to find the minimum result. 

After learning about how prim's algorithm works I insist choosing ***Min Heap*** as data structure. Here are my two reasons to use min heap:

1. **Sorts value automatically**: **Min Heap** or C++ STL <ins>priority_queue</ins> as the main DS is a better option than other data structure since min heap automatically sorts in ascending order. While other data structure has the blunder of not auto sorting which may explicitly done by programmer and that eventualy increases the complexity.

2. **Time complexity**:  
Inserting a new value (worst case complexity): O(log n)  
Inserting 'n' values (worst case complexity): O(n log n)  

**Implementation:**

```cpp
class values
{
public:
    int weight;
    int to;
    int from;
};

priority_queue<values, vector<values>, greater<values> pq;
```

### <ins>**Choosing DS for Kruskal's algrithm**</ins>
To implement Kruskal's algorithm we need an additional data structure namely **DSU (Disjoint Set union)**. This is used to find whether choosen edge is forming any cycles in the graph.

Time complexity of DSU: O(4α) per iteration, which is nearly constant. 

### **To store the edges we can use between:**

1. **Priority queue**: With priority queue the grand total complexity becomes O(E log V). The benefit of priority queue is it doesn't require to sort explicitly.

2. **Vector of pair of pair**: With vector of pairs we have to beforehand and so, grand total time complexity stands O(E log V).

Although both data structure are providing us the same complexity, here are some of my key observations: 

1. Implementing using priority queue is messy, vector of pair more off a cleaner approach as well as easy to implement.
2. In some rare conditions like sparse graph using priority queue is slightly effecient.
3. Space complexity of priority queue is more than vector of pair.
4. Although both implementations are same time complexity but priority queue is more faster in real world scenario.

In conclusion, I found vector of pair concise. Here are my implementation, 

```cpp
vector<pair<int, pair<int, int>>> edges;
```
Another alternative, 
```cpp
vector<tuple<int, int, int>> edges;
```

### **Choosing DS for Dijkastra's algrithm**

We can choose among three data structures to implement Dijkastra's algorithm, 
1. Queue
2. Priority queue
3. Set

Here are my comparisons:

| **Data Structures** | Insertion | Deletion |
| ------------------- | --------- | -------- |
| **Queue**           | O(1)      | O(1)     |
| **Priority Queue**  | O(log N)  | O(log N) |
| **Set**             | O(log N)  | O(log N) |

