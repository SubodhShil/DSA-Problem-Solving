> # **```Module 17: Binary Tree Implementation```**

A tree or **N-ary tree** is a non-linear hierarchical data structure combination of nodes.

- A tree is a non-linear data structure.
- Tree data structure is a hierarchy structure.
- File system is a prominent example of tree data structure.
- Topmost level of a tree is consist of single node namely **root** node.
- Apart from the leaf nodes, all other nodes in a tree can be addressed as parent node to it's next level nodes connected to it.
- Nodes belongs to the last level of a tree is said to be **leaf** node. These leaf nodes can't have any child nodes, thus leaf nodes can't be parent.

## **```Binary tree```**

A generic tree or **N-ary tree** can have as many nodes as children, but in binary tree a node restricted to have atmost 2 childrens.

- Binary tree is used in machine learning algorithm as decision tree.
- To visualize binary search
- Compiler syntax tree implemented
- Heap sort

<ins>Traverse and print **Binary Tree**</ins>

Unlike linear data structures, the non-linear data structures can't be print in linear order fashion since it has multiple path to be traversed.

To traverse a binary tree there are mainly four such way to do, such as:

1. Pre order traversing: Root ➔ Left subtree ➔ Right subtree
2. In order traversing: Left subtree ➔ root ➔ Right subtree
3. Post order traversing: Left subtree ➔ Right subtree ➔ Root

```mermaid
graph TD;
Order-->Depth;
Order-->Level;
Depth-->Pre-Order;
Depth-->Post-Order;
Depth-->In-Order;
```
## **```Variants of binary tree```**

1. **Full Binary Tree**: Count of child nodes either 0 or 2.
2. **Complete Binary Tree**: All levels are filled properly except for the last level filled from left to right sequentially. Complete binary tree isn't perfect but it tends to be perfect
3. **Perfect Binary Tree**: All levels needs to be filled up.

