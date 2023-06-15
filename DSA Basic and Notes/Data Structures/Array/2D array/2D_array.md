> # ```Multi-dimensional Array```

Each array element will be contain an array. Another way to say multi-dimensional array is **array of arrays**.

In memory level every multi-dimensional array is a single dimensional array but it is represented in a tabular way to give easier implementation to the programmer.

<p align="center" style="font-size: 18px"> <b>2D Array</b> </p>  

2D array also said to be **'Matrix array'**. A 2D array is directly called a matrix of i x j size. Where ‘i’ is row count and ‘j’ is column size.  

**Syntax:** data_type [row][column]  
**Total elements in a 2D array:** row count * column count  

**Input and output in 2D array**

```
int arr[2][2];
cin >> arr[0][0] >> arr[0][0];
cout << arr[0][0] << arr[0][0];
```

**Usecase**: A practical use case of 2D or any multidimensional array is huge data storage within minimal complexity or declaring an immense amount of variables. Like, a data warehouse uses multidimensional arrays.  

Formula: (Column count) x i + j  

### **❓How to find row and column size of a 2d array?**  

```
rowSize = array2D.size()
columnSize = array2D[0].size()
```

alternatively,

```
rowSize = sizeof(array2D)/sizeof(array2D[0])
columnSize = sizeof(array2D[0])/sizeof(int)
```

**Explain 2D array:** Assume there is a 2D array namely demoArray[3][5]. So, row = 3 and column = 5. Total element size = 3 * 5 = 15. We can rephrase it like this, demoArray[3][5] is a 2D array that is multiplied by its 1D form(demoArray[3] by the column count. Here, the first subscript refers to the 1D array of demoArray[3][5].

A basic array is a 1D array but a 2D array is a multidimensional array. There may be 3D, 4D or more array dimensions, but 2D covers our most use cases. We can utilize a 2D array for making matrices.

Internally, there is no multi-dimensional array is created in the memory. Rather, it creates traditional 1D array, in which a mathematical formula implies to simulate the 2D array. The formula is:  

```column * i + j```

### **How to create a 2D vector**

```cpp
vector<vector<int>> array2D(row, vector<int>(col));
```

1. How many rows in a 2D matrix = ```arr.size()```  
2. How many columns in a 2D matrix = ```arr[0].size()```  
3. Size of 2D matrix = ```arr.size() * arr[0].size()```

> # Problem 1

```

Description: You're given such input in a matrix form.
* . . .
. . . .
. * . .
. . . .

Whenever you got a '*' you have to change the element of it's adjacent into some user input 'n' (can be character)

Output: 

* 1 . .
. . . .
1 * 1 .
. . . .

Creator: Subodh Chandra Shil
```
