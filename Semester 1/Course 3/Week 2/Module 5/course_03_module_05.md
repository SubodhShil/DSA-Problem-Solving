> # **```Module 5```**

<ins>**Data structure</ins>:** A better way to structure and maintain data in the memory.

## <ins>**Drawbacks of array**</ins>

1. Due to the random memory occupation in the RAM, it become unstable to get a sequential length for an array each time. Suppose, we have a memory section of 100 bytes to store our data which having an address ranged from 200 to 300. Now, we want to declare an array of size 80 bytes which seems to easily be allocated. But in our code base we have stored a variable of 4 bytes before the array is declare, and it is allocated on some 250-254 address cell. Now, our array can be declared within the memory because, if we start from 200, it require 200 to 280 address cell sequentially. But since an extra variable appeared in the middle of the memory it is no more possible to allocate a sequential array size.

2. Random insertion, random deletion and increasing size on runtime isn't possible.

## <ins>**Linked List**</ins>

Unlike array, we store various data as nodes in different and non sequential or random places or addresses in the memory and connet them with links.

Linked list node require two important components, data value and address pointer to link to the next node.

There are various types and variations of linked list available:

1. <ins>**Singly linked list**</ins>: Nodes are connected in a single way.
2. Doubly linked list
3. Circular linked list
4. Circular doubly linked list

### **Why we need dynamic object to create node?**

There are many caveat using statically allocated nodes as for LL.

1. To deleting node as well as wipe out the allocated memory of a node, this was not possible with static object.

2. To creating nodes from anywhere in the codebase. Suppose we're creating a node from a function, after the function finishes it work the node will no more in the linked list.

## **Caution**

To iterate a linked list we should never move head node. Head node is the key component that make sure linked list exists, when traverse with head node it end up NULL pointer or points to nothing, thus the links between nodes are destroyed. So, to traverse or any other task to do we should always use secondary pointer of type Node as iterator.
