> # **```STL```**

STL stands for **Standard Template Library**.

&nbsp;

> # **```STL Vector```**

- The vector is a dynamic container class array available in the STL, with the convention of runtime size modification. A vector increases it size by implementing a simple mechanism. Vector usually looks out what is the current size and if the size yet to surpass, then it will create another array by double down it's previous size. Now since, the size increases so it will shift all older element along with the newer value.

&nbsp;

- **Create a vector of a specific size with all same value.**
    -

    ```cpp
    int size, value;
    cin >> size >> value;

    vector<int> v(size, value);

    for (auto i : v)
        cout << i << " ";
    ```

&nbsp;

- **Create a new vector by copying a previous vector or array**
    -

    ### <p align="center"> **(Way 1)** </p>

    ```cpp
    vector<int> v2(v);
    ```

    ### <p align="center"> **(Way 2)** </p>

    ```cpp
    int arr[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v2(arr, arr + sizeof(arr / arr[0]));
    ```
