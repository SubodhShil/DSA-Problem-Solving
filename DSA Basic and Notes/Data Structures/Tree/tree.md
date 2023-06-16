> # **```Tree```**

Tree is a non-linear hierarchical data structure **consist of nodes where each node having zero or more nodes connected by edges**.

## <p align="center">**Terminology**</p>

![](./tree1.png)

<ins>**Node**</ins>: A node is an entity that contains value and edges to it's child nodes.  
<ins>**Edge**</ins>: Edge is the link between two nodes. Edge implemented by pointer to next child nodes.  
<ins>**Root node**</ins>: The topmost node of the tree is called root node or **key**.  
<ins>**Parent node**</ins>: A node that that has at least one child associated with it is a parent node.  
<ins>**Child node**</ins>: Nodes that are connected to a parent nodes are said to be each others child node.  
<ins>**Leaf node**</ins>: The nodes with no children are called leaf node. Leaf nodes are not parent nodes.  
<ins>**Height of a node**</ins>:Number of edges from the node to it's deepest leaf.  
<ins>**Depth of a Node**</ins>:The depth of a node is the number of edges from the root to the node.  
<ins>**Height of a Tree**</ins>:The height of a Tree is the height of the root node or the depth of the deepest node.  
<ins>**Ancestors**</ins>: 

&nbsp;

### **Types of tree data structure:**

1. Binary tree
2. Binary search tree (BST)
3. AVL

> ## **```Binary tree```**

Each node can have atmost 2 nodes attached to it.  

A binary tree node contains these three fields:

1. Data
2. Pointer to left child
3. Pointer to right child
