> ## ```Pointer```

A pointer is a variable that stores address of other variables. While using pointer gives us the power to manipulate the location at it currently pointing.

Pointer dereferencing is way of accessing data at the location where the pointer is pointing.

```
    int x = 100;
    cout << "Before dereference: Value of x = " << x << endl;

    int *ptr = &x;

    /// dereferencing the pointer
    *ptr = 300;

    cout << "After dereference: Value of x = " << x << endl;

```

> ## ```Function```

A function is a reusable piece of codes to perform certain task (also known as procedure or subroutine). It can be utilized by calling from different places inside or outside of the file.

Advantages of function:  

1. Code resuability
2. Modularity

There are two types of functions:

1. User defined function
2. Built-in or library functions

C++ is a functional programming language. All of it's execution begins from the main function. Apart from main and all other provided built in functions, it is possible to create functions as users preference.

User designes a function by 3 requirements:

1. Whether the function will return any data?
2. How many parameter will there be in the function?
3. Is the function a recursive function or not?

&nbsp;

> ## ```Function prototype```

A function is declaration of reusable code block in source code that involves:

1. Providing function name
2. Spcifying function return type
3. Specifying function parameter type

A function prototype in C++ resides in global space of the source code. We can either define the function while prototyping or left it to later definition.

It is typically placed at the beginning of a program or in a header file to allow other parts of the program to call the function before it is defined.

```
/// function prototyping
int multiply(int a, int b);

int main()
{
    /// your codes here

    return 0;
}

/// function definition
int multiply(int a, int b)
{
    return a * b;
}
```

> ## ```Call by value and Call by reference```

There is two ways to pass value or data to the function.

1. **Call by value**

Call by value means that the function receives a copy of the value passed as an argument, and any changes made to the value within the function do not affect the original value. That means, no original value get spoiled, becuase the value passed to the function is locally stored by the function parameter in stack memory.

```
void add(int a, int b) {
    int sum = a + b;
    cout << "Sum is: " << sum << endl;
}

int main() {
    int x = 5, y = 10;
    add(x, y); // Call the add function with x and y as arguments
    return 0;
}
```

2. **Call by reference**

When it comes to call by reference function receives address or reference of a original variable as arguments. That is why changing any value of original value from the function body will eventually reflect outside.

```
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y); // Call the swap function with x and y as arguments
    cout << "x is now: " << x << endl;
    cout << "y is now: " << y << endl;

    return 0;
}
```

> ## ```Iterator```

Iterator points to a particular memory location or address of a STL containers. Iterator used to iterate over sequence of elements, characters to perform various operation such as access individual elements, to modify elements, or to remove elements with much efficiency.

Here I have created an iterator to traverse a vector array in C++

```
vector<int> v{10, 202, 3, 77, 93};

/// declare an iterator
/// iterator points to first element of the array
vector<int>::iterator it = v.begin();

for (; it != v.end(); ++it)
    /// accessing elements by dereferencing
    cout << *it << " ";
```

### **❓If p is a pointer to a float type variable and p = 201, what does (p + 3) yeild?**

Here, p is a pointer to a float variable.
p = 201, which is representing an address.
p + 3 here denoting an address 4 byte right to current address 201, since pointer is pointing to a float variable and each float variable allocates 4 byte memory space. So,
p + 3 = 201 + (3 x 4) = 201 + 12 = 213

### **❓What type of pointer can't be dereferenced and why?**

A pointer of type void or null pointer can't be dereferenced because it does not have a type associated with it. Dereferencing a pointer means accessing the value stored in the memory location pointed to by the pointer. Since void pointers do not have a type associated with them, the compiler does not know how many bytes to read from memory when dereferencing a void pointer.
Another reason is A null pointer is a pointer that points to an invalid address. It is often represented by the value 0. So, it is not possible to dereference null pointer.

```
int* p = nullptr;

// This will result in undefined behavior
int value = *p;
```
