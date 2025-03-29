> ### Topological Sort can be used to determine whether a graph is a Directed Acyclic Graph (DAG) or not.

## Kahn's Algorithm

> Topological sort using BFS

The simple logic behind the algorithm: Which node will execute first?  
👉 A node with no incoming edges (i.e., an in-degree of zero) is executed first because:

-   It has no parent or dependency.
-   No other node needs to be processed before it.

&nbsp;

-   Compute the in-degree (number of incoming edges) for all vertices in the graph.
-   Identify all vertices with zero in-degree and add them to a queue.
-   Pop element from the queue
    -   While poping element decrease it's neighbor nodes indegree value by 1
    -   If any neighbor node decrease to zero indegree value, the push it into the queue as well.
-   **While the queue is not empty:**
    -   Remove (pop) a vertex from the queue.
    -   Add this vertex to the topological order list.
    -   **For each of its adjacent (neighbor) vertices:**
        -   Decrease the in-degree of the adjacent vertex by 1.
        -   If the in-degree of any adjacent vertex becomes zero, add it to the queue.
