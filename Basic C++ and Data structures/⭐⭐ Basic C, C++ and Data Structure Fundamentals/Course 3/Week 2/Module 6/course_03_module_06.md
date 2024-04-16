> # **```Module 6```**

## <p align="center">**Insert a node at tail**</p>

To insert an node element at the end of the linked list, we don't need to traverse the entire linked list, rather reach to the last node where the next is pointing to null. So, to insert at tail our loop condition will be:

```cpp
    while (it->nextNode != nullptr)
    {
        it = it->nextNode;
    }
```

### **Exception handling**  

When inserting a node at the tail of an empty linked list, it is important to check if the list is empty first. If the list is empty, then the new node will become the head of the list. Otherwise, the new node will be inserted after the last node in the list. So, we need to check the following condition:

```cpp
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
```

## <p align="center">**Insert a node at any given position**</p>

**Note**: There is not particular restriction for using 1 or 0 based index system to iterate a linked list.

To insert a node at any position **```i```** we have to reach **i-1** index.

We can imagine this in two portions, left porition from index 1 to i - 1 and right portion from **```i```** index to last index. The new node will place in between these two portions.

Now, when deciding where to insert our new node between these two parts, we should not pick the left portion. Choosing the left portion would distort or spoil the link to the right portion, resulting in the loss of access to the right portion. Instead, we will choose not to pick any portion at all. In this case, we will simply add the link to the right portion and connect the left portion to the new node.

**Procedure:**

1. Declare the new node.
2. Traverse till i - 1
3. Link new node to the node at index i
4. Link i - 1 node to the new node

**Caution: If user inputs any invalid input**

To handle this edge case we need to check in the loop if linked list iterator exceeds the linked list and points to null.

```cpp
    for (int i = 1; i <= position - 1; ++i)
    {
        it = it->nextNode;

        if(it == nullptr)
        {
            cout << "Invalid position input\n";
            return;
        }
    }
```

