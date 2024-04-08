> # **```Graph Traversal```**

## <p align="center">DFS (Depth First Search)</p>

**DFS is a recursive algorithm.**

## <p align="center">Tree as a Graph</p>

### Criterias:
1. All nodes or vertices are connected.
2. There should be no cycle in the tree.
3. There should exist only a single path between any two node in the tree. 
4. Number of edges in the tree = |V| - 1 

![](tree_graph.jpg)  
Here in the tree, path from D to G: **D → B → A → F → G**

### Important Tree Terminologies
<ins>**Tree nodes inter-relationship properties**</ins>
1. Parent node
2. Child node
3. Siblings
4. Leaf node
5. Ancestors
   - Common ancestor
   - Lowest Common Ancestor (LCA): Common nearest ancestor is said to be LCA.

<ins>**Tree value properties**</ins>
1. Depth: **Depth is the distance between the ancestor or source vertex to a desired vertex.** Top to bottom manner or ascending manner. The depth of any child node increased by 1 comparing to it's parent.  
      **Child Depth = (Parent Depth) + 1**
2. Height: Bottom to top manner or descending manner. 
      - Height of a Graph: **The height of a graph is the maximum distance from the ancestor node or source vertex to bottom most leaf (on tree last level leaf node).**
      - Height of a vertex: The distance between a vertex and the bottom most leaf.  


