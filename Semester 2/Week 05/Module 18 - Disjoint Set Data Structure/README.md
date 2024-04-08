> # ```Disjoint Set Union (DSU) or Union-Find algorithm```

**Disjoin Set**: No common values between multiple sets or groups.  
**Union**: Union is an operation that used to combine two groups by deciding a common leader.

- Leader is the source.
- Used in dynamic graphs (graphs that continue changes it's configuration).
- Effeciently finds or check availability of a vertex in a graph or graph component.

### Common usecase
1. Cycle detection.
2. Component count, component same or not. 
3. Two components are friend or not.

### Operations of DSU
1. Initialize
2. Find
3. Union

### Algorithmic procedures 

- Initially, every element is the parent of itself.   
- **Find operation (finding parent of a node)**: If the parent of two nodes are same it means they are already friends. In contrast, if parent are not same they're not friend yet (or can also be said they belongs to different sets). 
- **Union operation (grouping)**: To create friendship between two nodes (only if friendship doesn't exist) they need to share the same parent. To do this, update or initialize one of the node's parent's parent by the remaining node's parent. 

## ```Union Operation Optimization```

### Union by level or rank
দুটি connected component বা group এর মধ্যে যে component group এর level কম হবে সেটা, বাকি component group এর parent এর child হিসেবে যুক্ত হবে । এটা করার কারণে graph এর level বাড়বে না । 

Prerequisite: level count করা ।

### Union by size
Size এর দিক থেকে যে group -টি বড় তার under এ ছোট size এর group টি থাকবে । 

Complexity of both optimized union operation O(α(n))
The complexity O(α(n)) is near to constant time complexity.

### How to count components
যতগুলো leader ততগুলো component.   
If there are more than one leader in the graph then it has more than one component. The number of component in graph depends on how many leader are there in the graph.

