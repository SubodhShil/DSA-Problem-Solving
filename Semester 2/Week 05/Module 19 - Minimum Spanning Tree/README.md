> # **```Spanning Tree```**

A subgraph that contains all the nodes of the graph.
It follows the conditions of a tree.
- number of edges to be selected: |V| - 1
- no cycles

&nbsp;

> # **```Minimum Spanning Tree (MST)```**

> A minimum spanning tree abides all the rules of spanning tree with an addition that the total cost of edges has to be minimum among other spanning tree formation.

> MST visits all the nodes within minimum overall distance.

- A graph could have more than one minimum spanning tree.

&nbsp;

> # **```Prim's Algorithm```**
### Steps

Starting from the source node pick up the minimum cost edge connected to the source node.

> # **```Kruskal's Algorithm```**
- Sort the edges in ascending order.
- While selecting an edges in minimum cost order always check if considering the edge will create any cycle or not. This can be easily found using DSU. 
- 
