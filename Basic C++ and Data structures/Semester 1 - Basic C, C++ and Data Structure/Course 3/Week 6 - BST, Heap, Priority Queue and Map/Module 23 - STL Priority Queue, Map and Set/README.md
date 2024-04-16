> # **```STL```**

### **"Priority Queue"** is the STL for ***Heap***.

In priority queue elements are arranged priority wise, where:

1. Elements with the highest priority are placed in the front.
2. Elements with similar or lower priority are placed towards the back or inserted in the last position.

<ins>The **Heap Sort** is a sorting algorithm uses priority queue to sort.</ins>

## **```Beneficial usecase of priority queue```**

Inserting a value into a sorted array can't gurantee if the array remain sorted. For example, **```[10, 13, 23, 45]```**. Now after you've inserted value **1** in the array, it will look like **```[10, 13, 23, 45, 1]```** which isn't a sorted array anymore.

**```If the requirement for some sequence of elements has to be sorted even after an element inserted or deleted (that may break the sorted manner) then one should utilize priority queue.```**

## **Declaring different type of priority queues**

**Max heap priority queue**:
```cpp
    priority_queue<data_type> pq;
```
&nbsp;
**Min heap priority queue**:
```cpp
    priority_queue<data_type, vector<data_type>, greater<data_type>> pq;
```

**In case of min heap priority queue the custom comparator is a comparator class.**


