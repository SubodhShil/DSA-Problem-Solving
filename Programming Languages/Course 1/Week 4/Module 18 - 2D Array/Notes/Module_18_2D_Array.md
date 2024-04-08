> # ```Module 18```

Suppose you have been asked to create 100 arrays in your codebase. However, creating such a large number of arrays can be an overhead. To avoid the redundancy of array declaration, we can create an **array of arrays**. This is similar to a traditional array where variables are stored in a sequential manner. Similar to traditional arrays, where variables are stored sequentially, a 2D array can store multiple arrays in a sequential order.

### **Syntax:**  

```array[row][column]```  
The first subscript represents 'row' which is itself a 1D array and second subscript represents 'column', which indicates the number of elements in each row.

Total values in a 2D array: **row x column**

### **Row Matrix**

A row matrix is a matrix with only one row and 'n' number of columns.

```
int arr[1][n];
```

### **Column Matrix**

A matrix with one column is a column matrix.
A 2D array is a 1D array if the column count is 1.

```
int arr[2][1] = {{1}, {2}};
for (int i = 0; i < 2; ++i)
{
    cout << arr[i][0] << endl;
}
```

## <p align="center"><b>Matrix and 2D array</b></p>

2D arrays are also known as matrix. In mathematics, matrix are two dimensional rectangular array of numbers, symbols or expressions, arranged in row and columns.

**Types of matrix:**

1. Row matrix
2. Column matrix
3. Zero or null matrix
4. Diagonal matrix
5. Scalar matrix
6. Unit matrix
7. Rectangular matrix
8. square matrix

## <p align="center"><b>Passing 2D array as argument</b></p>

### **Syntax:**  

```
void functionName(dataType arrayName[][size2], int size1)
{
    // Function code here
}
```
