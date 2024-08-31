> **Degree**: Graph এর একটা node/edge এর through আর কতগুলো node এর সাথে connected আছে ।  
> একটা undirected unweighted graph এর total degree count: 2 \* edge count

> **Handshaking lemma**: There is always an even number of nodes or vertex available in a graph that has an odd number of degrees.

> Connected graph: যেকোন node থেকে graph এর বাকি সব গুলো node এ visit করা গেলে সেটাকে connected graph বলে । It is said to be connected if there is a path between every pair of vertex.
> Path exist করলে connected

### Source থেকে অন্য সকল node গুলোর জন্য shortest distance বের করা সম্ভব ।

### Count the number of shortest of paths

## Bipartite Graph

-   **Bi-coloring**: Bi-coloring a graph refers to initialize each nodes a color value between any two.
-   Bipartite graph is coloring available nodes using two colors.
-   A graph refers to a bipartite graph if no two adjacent nodes share the same color.
-   If any node has neighbors with alternative colors, it results or forms a non-bipartite graph.
-   While coloring or labeling graph nodes with different colors, if any two adjacent node triggered as different color is eventually a **Bipartite graph**.
-   Bipartite graph কে দুইটা disjoint set এর মতো করে ভাগ করা যাবে, যেখানে কোন সেটের মধ্যে সবগুলো color একই হবে ।

# Tips

1. Shortest path related কোন requirement না থাকলে DFS ব্যবহার করা উচিত ।
2. 
