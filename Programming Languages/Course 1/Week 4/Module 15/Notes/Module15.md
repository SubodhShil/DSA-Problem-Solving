> # ```Module 15```

To store address as value to a pointer variable, it requires to use Ampersand(&) sign or **'address of'** operator with the variable, which address we want to store.

```
int value = 100;
int *ptr = &value;

/// see the address stored in the pointer 'ptr'
cout << ptr << endl;

/// see the value stored in the pointer address (dereferencing)
cout << *ptr << endl;
```

### **Pass or call by value**

When a function is called or invoked, the value we pass as an argument is copied into the function parameter, and any changes made to that parameter are completely local means no actual value changed through the process even if the value at the function is changed/spoiled/updated.

```
#include <stdio.h>

void callByValue(int x)
{
    x = x + 30;
    printf("Local x = %d\n", x);
}

int main()
{
    int x = 300;
    printf("x value before = %d\n", x);
    callByValue(x);
    printf("x value at main = %d\n", x);

    return 0;
}
```

### **Pass or call by reference**

In pass by reference we have to provide the address of a variable to the parameter of a function, where the parameter is a pointer variable. Since the parameter is a pointer variable, it can dereference that value. If the value changes by dereferencing, the actual value at the address will also be changed.

```
void callByReference(int *y)
{
    *y = 1000;
    printf("Local y (by dereferencing) = %d\n", *y);
}

int main()
{
    int y = 500;
    printf("y value before = %d\n", y);
    callByReference(&y);
    printf("y value after = %d\n", y);

    return 0;
}
```

### **Array and pointer**

1. Address of entire array == Address of the first element of the array
2. Name of the array represents a pointer
3. arr[i] = *(arr + i)
4. arr[1] == *(arr + 1) ==*(1 + arr) == 1[arr]
5. When you pass an array as an argument to a function, the array is converted to a pointer to the first element of the array. This is called pass-by-reference. The reason for this is that arrays are passed by value in C, and passing an array by value would create a copy of the entire array, which can be wasteful of memory.  
When the printArray() function is called, the function does not need to know the size of the arr array. This is because the function can simply use the pointer to access the elements of the array. This saves stack space because the function does not need to allocate space for the arr array on the stack.
6. The reason why sizeof(arr) returns 2 is because when you pass an array as an argument to a function, it decays into a pointer to the first element of the array. So, sizeof(arr) is equivalent to sizeof(int*), which is the size of a pointer variable in your system. The size of a pointer variable is usually 4 bytes on 32-bit systems and 8 bytes on 64-bit systems.
**To fix the problem you need to pass the size of the array to function as well**:  

```
void arrayPrint(int *arr, int n)
{

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    arrayPrint(arr, n);

    return 0;
}
```

## Quiz

```
#include <stdio.h>
int main()
{
    int ary[4] = {1, 2, 3, 4};
    int *p;
    p = ary + 3;
    *p = 5;
    printf("%d\n", ary[3]);
}

```

Result: 5
