> **Cycle detection in a undirected graph:** If a node's neighbor is already visited and not it's parent than there must be a cycle in the graph.

> ## `Cycle detection in directed graphs`

-   **Intuition**: If a node re-appear in a directed path or DFS stack, then it shows there is a cycle in the graph.
-   **Opitmization**: Any sub-path with no cycle can avoided by using a visited array.
