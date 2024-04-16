> # **```Queue Implmentation and STL```**

1. The **Queue** is an ADT (Abstract Data Type) can be implemented by array or linked list.

2. Queue obeys the manner of **FIFO (First In First Out)** or **LILO (Last In Last Out)**

A queue can be implemented using an array. This is called a circular queue.

Disadvantages of circular queue:

1. Deleting an element from a circular queue can be expensive. This is because the elements in the queue are stored in an array, and when an element is deleted, the remaining elements must be shifted to fill the gap.
As a result, the time complexity of deleting an element from a circular queue is **O(n)**.

2. Arrays are fixed in size, so circular queues implemented using arrays are also fixed in size. Vectors seems to be a good alternative to arrays because it can grow and shrink dynamically. However, vectors are still implemented using arrays, and when they grow, they internally create a new array and shift the previous values to the new array.
