> # ```Multi-dimensional Array```

Each array element will be contain an array. Another way to say multi-dimensional array is **array of arrays**.

In memory level every multi-dimensional array is a single dimensional array but it is represented in a tabular way to give easier implementation to the programmer.

&nbsp;

># ```2D Array```

### **Introduction:**

* Any multidimensional array is nothing but a basic array, but it represent in a way that can be handled easily by the programmer. As for 2D array it's defined as array of arrays.
* 2D array items are arranged in row major order.
* 2D array is a multidimensional array, where items are stored in both row and column direction. This array implementation is visually a matrix representation.
* Two-dimensional (2D) arrays are indexed by two subscripts, one for the row and one for the column.
    ```arr[row][column]```
* Size of 2D array is described as ```row x column```.

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

&nbsp;

### **❓How to create a 2D array of a pre-defined size with all same value?**

```cpp
int predefinedValue;
cin >> predefinedValue;

vector<vector<int>> matrix(row, vector<int>(col, predefinedValue));
```

&nbsp;

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

> ## ```🟨 Basic template for 2D array```

* Three ways a 2D array can be defined

```
        /*
        ====================================
        2D array using array data structure
        ====================================
        */

        int row, col;
        cout << "Enter row and column: ";
        cin >> row >> col;

        int arr[row][col];
        cout << "Enter elements: ";
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                cin >> arr[i][j];

        cout << "Your matrix is: ";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
```

```
        /*
        =========================================
        2D array using C++ vector class container
        =========================================

        ## Create a vector of 'n' items or row items, where each n/row has 'm' items (since 2D array is array of arrays).
        */

        int row, col;
        cout << "Enter row and column: ";
        cin >> row >> col;

        vector<vector<int>> arr(row, vector<int>(col, 0));

        cout << "Enter elements: ";
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                cin >> arr[i][j];

        cout << "Your matrix is\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
```

```
        /*
        ====================================
        2D array using array class container
        ====================================
        */

        array<int, 3> arr[3]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int size = 3 * arr[0].size();

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cout << arr[i][j] << " ";
```

## ```Problem 1: Wave Print```

```
// Link: https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268

/*
        Testcase:

        1 2 3 4
        5 6 7 8
        9 10 11 12

        => 1 5 9 10 6 2 3 7 11 12 8 4
*/

    vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
    {
        vector<int> v;
        for (int i = 0; i < mCols; i++)
            if (i % 2 == 0)
                for (int j = 0; j < nRows; j++)
                    v.push_back(arr[j][i]);

            else
                for (int j = nRows - 1; j >= 0; j--)
                    v.push_back(arr[j][i]);

        return v;
    }
```

---

## ```Problem 2: Spiral Print```

> ```
> int arr[3][3] {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} 
> ```

| 1   | 2   | 3   |
| --- | --- | --- |
| 4   | 5   | 6   |
| 7   | 8   | 9   |
> ```1 → 2 → 3 → 6 → 9 → 8 → 7 → 4 → 5```
>

```
        //* link: https://leetcode.com/problems/spiral-matrix/
        //* link2: https://www.codingninjas.com/codestudio/problems/spiral-matrix_840698

        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0, total = row * col;
        int firstRow = 0, lastCol = col - 1, lastRow = row - 1, firstCol = 0;
        vector<int> ans;

        while (count < total)
        {
            //* print the first row
            //^ print all column elements from starting column to last column
            for (int i = firstCol; count < total && i <= lastCol; i++)
            {
                ans.push_back(matrix[firstRow][i]);
                count++;
            }
            firstRow++;

            //* print the last column
            //^ print all row elements from starting row to last row
            for (int i = firstRow; count < total && count < total && i <= lastRow; i++)
            {
                ans.push_back(matrix[i][lastCol]);
                count++;
            }
            lastCol--;

            //* print the last row
            for (int i = lastCol; count < total && i >= firstCol; i--)
            {
                ans.push_back(matrix[lastRow][i]);
                count++;
            }
            lastRow--;

            //* print the first column
            for (int i = lastRow; count < total && i >= firstRow; i--)
            {
                ans.push_back(matrix[i][firstCol]);
                count++;
            }
            firstCol++;
        }

        return ans;
```

---

## ```Binary Search in 2D array```

```
        int row, col;
        cout << "Enter row and column: ";
        cin >> row >> col;

        vector<vector<int>> arr(row, vector<int>(col, 0));

        cout << "Enter elements: ";
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                cin >> arr[i][j];

        cout << "Your matrix is\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        int itemsCount = row * col; // for 2D vector (matrix.size() * matrix[0].size())
        int first = 0, last = itemsCount - 1, mid = first + (last - first) / 2;
        cout << "Enter target: ";
        int target = 0, rowOn = 0;
        cin >> target;

        while (first <= last && rowOn < row)
        {
            if (target == arr[rowOn][mid])
                return mid;
            else if (target > arr[rowOn][mid])
                first = mid + 1;
            else
                last = mid - 1;
            mid = first + (last - mid) / 2;
            rowOn++;
        }

        return -1;
```

---

># ```Mathematics```

## GCD and LCM

**GCD(Greatest Common Divisor) using LCM**  

> ### **GCD(a, b) = $\cfrac {|a.b|}{LCM(a,b)}$**

**LCM(Least Common Divisor) using GCM**  

> ### **LCM(a, b) = $\cfrac {|a.b|}{GCD(a, b)}$**

---

```
//* GCD or HCF
        /*
            ^ GCD(a, b) = gcd(a - b, b) where a > b;
         */

        //! Bruteforce
        /*
            1. determine the lowest value among two given number
            2. now start  reverse-iteration from the lowest value, and decrease by every unsuccessful iteration the lowest value has to decrease by 1
            3. at a point of the iteration when both of the number get divided you have to stop the loop and thus the divisor is the answer
         */

        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        int min_num = min(a, b);
        while (min_num > 0)
        {
            if (a % min_num == 0 && b % min_num == 0)
                break;
            else
                min_num--;
        }

        cout << "\nGCD [Bruteforce Solution]\n==================\n";
        cout << min_num << " is GCD of " << a << " and " << b << endl;

        cout << "\nGCD [Euclidean Algorithm // Iterative]\n==================\n";
        int n1 = a, n2 = b;
        while (a % b != 0)
        {
            int rem = a % b;
            b = a;
            a = rem;
        }
        cout << b << " is GCD of " << n1 << " and " << n2 << endl;

        //* LCM
        //^ Determining LCM is quite easy if we get the result of GCD
        int LCM = (n1 * n2) / min_num;
        cout << "LCM of " << n1 << " and " << n2 << " is: " << LCM << endl;
```

>## Sieve of Eratosthenes

**Important study links and practice problems:**

1. <https://codeforces.com/blog/entry/3519>
2. <https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html>
