> # ```Bellman-Ford Algorithm```

### Dijkstra algorithm doesn't gurantee the optimal and accurate solution when the graph is negative weighted. So, we have to look forward to other algorithms like, **Bellman-Ford**.

- A shortest path between source 's' and destination 'd' has atmost (at worst case) **|V| - 1 edges**, here |V| refers to number of vertices in the graph. Because, a shortest path never repeat an already visited node.
- Relaxation will take place for '|V| - 1' time in iteration till the relaxation result duplicates.
- Bellman-Ford doesn't works with a graph having negative weight cycle.
  - Although Bellman-Ford algorithm can detect negative edge cycle. If, the relaxation continues for more than |V| - 1 time (relaxation result doesn't repeats the same still for |V| iterations) then there must be a negative edge cycle in the graph. 

&nbsp;

> # **```Floyd Warshall: All pair or multi source shortest path```**




