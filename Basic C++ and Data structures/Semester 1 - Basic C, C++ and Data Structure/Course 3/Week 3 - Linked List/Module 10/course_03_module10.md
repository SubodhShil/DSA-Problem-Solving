> # **```Module 10```**

STL list can't be iterate using index poniter. To iterate through a STL list we have to use iterator pointer.

```cpp
    list<int> myList(10, -13);

    for (auto it = myList.begin(); it != myList.end(); ++it)
        cout << *it << " ";
```
