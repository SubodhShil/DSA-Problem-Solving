> # **```Module 18: Operations on Binary Tree```**

### <ins>**Level order tree input**</ins>

1. Every existing child node value should have a positive value.
2. Non existing value could be identified by value -1 (or any other negative value).

### <ins>**Level order tree traversing**</ins>

1. In each level, starting from left toward right or right toward left, we will take each node and push it into a queue (queue data structure is important to maintain the level order).

2. Do the rest of the work (like printing the value, taking node input) with that element you just stored.

3. After doing all the work with the node element, it's time to push child nodes of that node to the queue. Be cautious, condition checking the node availability.

Continue do the same stuff following steps **1 to 3**.

**BFS** uses level order traversing technique.

### **Binary tree height**

The number of nodes in the longest path from the root to any leaf node. 

The lowest height tree can have is 1. In this case, that tree would have only one node. 

### Diameter of a binary tree
Diameter is a longest path between any two nodes of a binary tree.
