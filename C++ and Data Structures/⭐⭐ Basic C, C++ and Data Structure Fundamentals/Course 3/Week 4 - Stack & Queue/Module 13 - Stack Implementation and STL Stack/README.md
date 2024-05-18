> # **```Stack and Queue```**

## <p align="center">**What is Stack?**</p>

Stack is a ADT **(Abstract Data Structure)**.

ADT's (also known as **"High level data structure"**) are not native data structures like array or linked list, rather these data structures are some concepts shaped around data structure we already have. Just like stack, a string is also an ADT.

Stack is a linear and non-sequential or non-consecutive data structure.
It stores data in a FILO or LIFO fashion, which means data is inserted at top and also removed from the top.

Operation type:

1. **LIFO** (Last In First Out)
2. **FILO** (First In Last Out)

Some of the real life useage of stack are like go back the previous history in browser.

**Three types of stack implementation:**

1. Using dynamic array: Deletes element in O(1)
2. Using singly linked list: Deletes element in O(n)
3. Using doubly linked list (more effective than singly linked linked list implementation of stack, since we don't have to traverse till tail again and again). Deletes element in O(1)
