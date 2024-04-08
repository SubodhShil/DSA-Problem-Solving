> # ```Module 07```

## <p align="center"><b>Array</b></p>

A linear fashion, continuous data structure that stores data of similar type (In most of the strongly typed languages like C, C++, Java. Python, JavaScript array can store various type of data).

**Array**: A convenient data structure that can store multiple values with the same data type. Basic arrays that store single value corresponds to an index is known as 1D array (single dimensional array).

### **Why do we require array**

1. We need to store a lot of data for our application, which can't be possible by making variable for each of the data. To avoid variable redundancy we have to use array.

&nbsp;

***Syntax***

```
///@syntax: data_type identifier[size];

/// create an array that stores student name (string)
string studentNames[1000];

/// creating an array of 1000 students age
int studentAges[1000];
```

***Notes***

1. The [] bracket is said to 'square bracket' but in context of array it also said 'subscript'.
2. The size of must be defined at the time of it's creation. That means leaving the [] empty will cause compilation error. **For example, ```int nums[]``` is wrong**.
3. The size of array is could be a constant.

```
int size;
cin >> size;
int arr[size];
```

```
const int size = 1000;
int arr[size];
```

```
int arr[1000];
```

```
int arr[] = {5, 10, 15, 20};
```

👆 Aforementioned snippets are correct. But, following are not 👇

```
int arr[];
```

4. **Inserting value**: The operation is also known as insertion operation of array. We can initialize an array using following method.  

**(1) Initialize at time of declaration**

```
int arr[5] = {1, 2, 3, 4, 5};
```

**(2) Initialized By index**

```
int arr[3];
arr[0] = 10, arr[1] = 20, arr[2] = 30;
```

5. **Accessing value**

    - Accessing by index: Each element of the array can be accessed by it's index. Array element accessing range: First array element = 0 and last array element = size - 1. So, the range of an array element is arr[0] to arr[size - 1]  
    **Accessing n-th element of an array: identifierOfArray[n - 1]**

        ```
        int arr[] = {10, 20, 30};

        /// accessing the first element
        printf("%d", arr[0]);

        /// accessing the second element
        printf("%d", arr[1]);

        /// accessing the third element
        printf("%d", arr[2]);
        ```

    - Accessing using pointer dereferencing:

        ```
        int arr[] = {10, 20, 30};

        /// accessing the first element
        printf("%d\n", *(arr));

        /// accessing the second element
        printf("%d\n", *(arr + 1));

        /// accessing the third element
        printf("%d\n", *(arr + 2));
        ```

    Quiz:

    ```
    int x[3] = {10, 20, 30};
    printf("%d\n", *x + 2);
    printf("%d\n", x[0] + *(x + 1));
    ```

6. The name of the array is only recognized the first element. All other elements are recognized by index. But in C++, printing the array name will show an address which is actual address of the array or the first elements address.

    ```
    int arr[5] = {0};

    /// both will show same address
    cout << arr << endl;
    cout << &arr[0] <<endl;
    ```

7. **Address and index relation**: For each index an array element move to it's next element address in an mathematical formula interval. For example,

    ```
    int arr[3] = {-1, -2, -3};
    ```

    Here in the array suppose, the address of the first element is 500 lets say base address. Since, this array has 3 elements, we can get the second element address:
            ```
            base address + (nth-element index x data_type)
            ```

    Now, calculating the addresses  
    1st element address (arr[0]) = **500 + (0 * 4) = 500**  
    2nd element address (arr[1]) = **500 + (1 * 4) = 504**  
    3rd element address (arr[2]) = **500 + (2 * 4) = 508**  

***Traits of an array***

1. An array has a 0-based index system, which implies that its items are numbered beginning with 0 rather than 1. In other words, the first item in an array has an index of 0, and the last element has an index of size - 1, where "size" refers to the array's total number of items.
2. Array allocates memory of the size it’s been declared. If the array isn’t dynamic then the array size must be a constant unsigned integer value.
3. In lcoal scope, for a size 'n', the array initializes with garbage value for each index. Try print out this:

    ```
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    ```

4. Array stored in a contiguous memory location, which means you can track any array element without iteration or simply say random array element access is possible. The time complexity for randomly accessing an array element is O(1) or constant time access.

5. How compiler access an array element within constant time? => Behind the seen the compiler does some mathematical calculations to find the nth element of an array. The compiler does find the address of every array element thus we can access array elements randomly in constant time.

    - **Formula**: address_of_the_array + total_array_element_size *(target nth element - first_element)
Since, first element of an array starts with 0 so we can rewrite the formula as:
address_of_the_array (address of the first element)  + total_array_element_size* target_nth_element
For example: If the address of the array is 1000, the element size is 8 then find the address of the 7th element.
Calculation: 1000 + 8 * 6 = 1048
Keypoint: In C or C++ address of an array is represented by its 1st element or the 0th index element. Since we have the formula for tracking any array element we can now apply the first element’s address and find the address of the element at the nth index.

6. Variable size array vs Fixed size array

    **Variable sized array**:

    ```
    int x;
    cin >> x;
    int arr[x];
    ```

    With variable sized array, you can't initialize at declaration.
    ❌❌❌

    ```
    int x;
    cin >> x;
    int arr[x] = {10, 20, 30}; /// Wrong
    ```

    **Fixed size array**:

    ```
    int arr[100];
    ```

    With fixed size array it is safe to initialize.

    ```
    int arr[100] = {300};
    ```
