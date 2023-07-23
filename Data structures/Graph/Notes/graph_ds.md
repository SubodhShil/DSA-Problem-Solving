> # **```Graph```**

Graph is a non-linear data structure that consist of finite number of objects called <ins>nodes or vertices</ins> **(V)** and a set of connection between nodes called <ins>edges</ins> **(E)**. A graph denoted as G(E, V).

&nbsp;

## **```Difference between trees and graphs```**

Both trees and graphs are non-linear data structures that can be used to represent a variety of data. However, there are some key differences between the two data structures.

**Trees**

* A tree is a connected graph with no cycles.
* A tree has a root node, which is the only node that does not have a parent node.
* All other nodes in a tree have exactly one parent node, except for the leaf nodes, which have no children.
* Trees can be used to represent hierarchical data, such as the file system of a computer.

**Graphs**

* A graph is a collection of nodes and edges.
* A node is a data point, and an edge is a connection between two nodes.
* Graphs can be directed or undirected. In a directed graph, edges have a direction, and in an undirected graph, edges do not have a direction.
* Graphs can be weighted or unweighted. In a weighted graph, edges have a weight, which represents the cost of traversing the edge. In an unweighted graph, edges do not have a weight.
* Graphs can be used to represent a variety of data, such as social networks, transportation networks, and computer networks.

Here is a table that summarizes the key differences between trees and graphs:

| Feature           | Tree                                      | Graph                                                       |
| ----------------- | ----------------------------------------- | ----------------------------------------------------------- |
| Connectedness     | Connected                                 | May or may not be connected                                 |
| Cycles            | No cycles                                 | May have cycles                                             |
| Root node         | One                                       | None                                                        |
| Children          | Exactly one                               | Zero or more                                                |
| Leaf nodes        | Have no children                          | May have children                                           |
| Hierarchical data | Yes                                       | No                                                          |
| Applications      | File system, decision trees, search trees | Social networks, transportation networks, computer networks |

In general, trees are used to represent hierarchical data, while graphs are used to represent a wider variety of data.

&nbsp;

> ## <p align="center">**```Terminologies```**</p>

**Nodes or vertex**:

&nbsp;

## **```Graph Direction```**

Graph can be divided into two types depending on the direction of its edges:

1. <ins>**Undirected graph**</ins>: No specific direction is associated with nodes. Since undirected graphs don't have a specific direction, they can roam around independently in any direction. **Bidirectional**.

2. <ins>**Directed graph**</ins>: Has a strict direction for nodes to move in a certain path. All the edges are directed.

&nbsp;

## **```Graph connectivity```**

1. <ins>**Connected Graph</ins>**: A graph is said to be connected if there is a path between every pair of vertex. You can reach any vertex from any other vertex in a connected graph by following a series of edges.

&nbsp;

## **```Cycles in a graph```**

Start traversed from a node and end up come back to the nodes is said to be cycle.

&nbsp;

## **```Path```**

A path is a direction of continuous and unrepeated sequence of nodes.

* In an undirected graph, a path is a sequence of vertices that can be traversed in either direction.
* In a directed graph, a path is a sequence of vertices that can only be traversed in the specified direction.

Rules:

1. Node can't appear twice or repeated.
2. Two nodes need to be squential and connect by edges.

&nbsp;

## **```Degrees in graph```**

### <ins>**For an undirected graph**</ins>

The number of edges attached to it.  
**Total degree of an undirected graph:** 2 x E = 2 x Number of edges in the graph.

### <ins>**For an directed graph**</ins>

**Indegree:** Number of incoming edges to a node.  
**Outdegree:** Number of outgoing edges to a node.

&nbsp;

## **```Edge weight```**

An edge weight in a weighted graph is a numerical value associated with an edge that expressed as the cost of traversing from one node to other as distance or any other relevant attribute.

If in a graph the weight of edges are not explictly mentioned then take up unit weight as value 1.

&nbsp;

## **```Graph representation```**

### **```1. Adjacency matrix (using 2D array or matrix)```**

Boolean matrix: Representing graph in a boolean matrix where 0 means path doesn't exist and 1 mean path exist.

To represent a value or weight on a directed graph, put the weight on the cell and if no value associated to a particular direction then mark it as -1. 

Drawbacks:
1. Inserting new nodes dynamically is complex. 
2. Space complexity (for 'n' nodes): O(n^2).
3. Adjacency matrix is more space consuming and there could be possibilities of spaces are not utilizing since nodes with no relationship or individual isolated nodes exists more. These type of graph isolated to any relation are known as **Sparse Graph**. So, we can say sparse graph cause waste of spaces.

### **```2. Adjacency list```**

This representation uses various other data structure apart from matrix or 2D arrays.   
**Data Structures:** Array of linked list

**Worst case:** Every vertex is connected to all other vertices. Space complexity: O(V^2)
**Average case:** Space complexity: O(V + E)

Worst case scenario => Sparse graph  
Average case scenario => Dense graph

### **```3. Adjacency hashmap```**
**Data Structures:** Hashmap (for C++, unordered map) of a linked list

### **```4. Edge list```**
**Data Structures:** Array of pairs.   
Kruskal algorithm is easier to implement with graph **edge list** implementation.

&nbsp;

## **```Graph traversal```**
### **```Some observations```**

**```All trees are graphs but not all graphs are trees.```**
Since graphs could have cycles traversing with recursive way can encounter infinite loop, which is why we need to mark the nodes visited.

### **1. DFS (Depth First Search)**
DFS is a traversal algorithm where we explore one path till the end.

### **2. BFS (Breadth First Search)**
BFS 

&nbsp;
## **```Connected components```**
![Graph with three connected components](./graph_connected_components.png)

&nbsp;

## <p align="center">**```Spanning Tree```**</p>

A spanning tree is a sub-graph of a graph that has no cycle or loop and covers all the nodes.

Criteria of a spanning tree:

1. It is a sub-graph.
2. All nodes or vertices need to be covered.
3. It must be a tree, no cycle should be occurred.
4. Must have n - 1 edges connecting all the vertices.

* Take all vertices, |V|
* Calculate edges: |V| = vertices - 1

![mst](./spanningtree1.png)

### **How many different spanning tree can be generated from a graph?**

**Formula:**

![formula](./spanningtree2.png)

&nbsp;

## **```Minimum cost spanning tree (MST)```**

In minimum cost spanning tree you will be given a weighted graph.
Take |V| - 1 number of edges.

Two greedy algorithms are available to find MST:

1. Prime's algorithm
2. Kruskal's algorithm

## <p align="center">**(1) Prime's algorithm**</p>

1. Delete the loop form the graph.
2. Delete the low cost edge between parallel edges.
3. Delete the cycle from the graph.

* Find the minimum cost edge.
