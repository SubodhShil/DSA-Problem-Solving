> # **```Graph on 2D grid```**

All data structure should be in a 2D matrix format.

### Move to the children (Depends on the question)
1. **Up/Down**: 'i' variable changed 
   1. Up: (i - 1, j)
   2. Down: (i + 1, j)
2. **Left/Right**: 'j' variable changed

### Index validity check
We always be careful about handling index overflow or underflow. In simple words, we make sure index is valid. 

### ```If a question says, "path or road between two places" that means the question refers to an undirected graph.```