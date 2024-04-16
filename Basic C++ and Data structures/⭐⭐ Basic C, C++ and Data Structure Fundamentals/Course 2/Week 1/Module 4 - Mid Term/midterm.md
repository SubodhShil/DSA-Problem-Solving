> ## **```(1.a) Explain Stack and Heap memory.```**

Stack and heap are two different fragement of memory. In C, C++ these two portions are resposible for storing data statically and dynamically.

**Stack:** Stack is an implementation that stores function calls along with the local variables in it. Stack execute these functions in **First In Last Out** (FILO) manner, where the most recent function call or variable is handled first. The variables in the stack frame are strict and static in size, which can't be modified or resized during runtime.

**Heap:** Heap encounters a lot of missing feature from stack, it stores data in dynamically that could be changed later on runtime. Heap memory can both allocate and deaclloate(wipes out allocated memory) memory. Heap is also referred as 'free store' since it is larger in size compared to stack.

&nbsp;

> ## **```(1.b) Why do we need dynamic memory allocation? Explain with examples.```**

When variables, arrays, or other data structures are created, they are stored in stack memory. Once memory is allocated in stack memory, the variables or data structures are static and have a fixed size. This can be a problem for robust applications, as the size of the data structures may need to change over time.

For example, an e-commerce application has 1,000 users during the off-season, but during the holiday season, that number might increase to 2,000. In this case, the data structure would need to be resized to accommodate the additional users. However, this is not possible with stack memory, as the stack size is fixed. Additionally, it is not possible to decrease the size of the stack once it has been allocated. This can lead to memory wastage.

Heap memory is a solution to this problem. Data structures that are stored in heap memory are dynamic, meaning that their size can be changed at runtime. This allows us to resize the data structure as needed, without having to worry about memory wastage. Additionally, we can delete allocated memory from the heap, which can help to improve performance.

&nbsp;

> ## **```(1.c) How to create a dynamic array? What are the benefits of it?```**

```cpp
int *users = new int[1000];

/// increasing the size by reallocating
int new_size = 2000;
users = realloc(users, new_size * sizeof(int));

/// delete the array using delete operator when we no longer need it

delete[] users;
```

**Benefits of creating dynamic array:**

1. Can be resized at runtime.
2. Can be free memory by deallocating.
3. Allows for flexible data structures that can grow or shrink as needed.
4. **Enables dynamic resizing without the need to create a new data structure.** While resizing static memory we need to take new data structure with new size and shifting previous values to the new sized data structure.

    ```cpp
        int arr[10] = {1, 2, 3, 4, 5};
        int arr2[10] = {0};
        copy(arr, arr + 5, arr2);
        arr[5] = 6, arr[6] = 7, arr[7] = 8, arr[8] = 9, arr[9] = 10;

        for (int i = 0; i < 10; ++i)
            cout << arr[i] << ' ';
    ```

    On the other hand, with dynamic memory allocation it doesn't reuqire to create a new data structure to expand the size. So, this is flexible since the resize happens in in place.

    ```cpp
    /// previous size
    int *dynamicArray = new int[size];

    /// resize
    dynamicArray = static_cast<int *>(realloc(dynamicArray, new_size * sizeof(int)));
    ```

5. Easy to use
6. In C++, dynamically allocated memory is stored in the heap, which offers a larger memory capacity compared to the stack memory.

&nbsp;

> ## **```(2.a) How does class and object work? How to declare an object?```**

A class in C++ is a blueprint for creating an object often referred as user defined data type. It comprises different building blocks, such as data members and member functions (methods). The data members are the variables that are associated with an object, and the member functions are the methods that are used to manipulate the data members. The values of the data members and member functions can be different for each object. When an object is created, memory is allocated to store its data members, and it can invoke the member functions defined in its class.

Here is how we're creating a class and an object:

```cpp
class Laptop
{
public:
    string modelName;
    int ramSize;
    float price;
};

int main()
{
    /// creating object
    Laptop Macbook;
}
```

&nbsp;

> ## **```(2.b) What is a constructor and why do we need this? How to create a constructor show with an example.```**

A constructor is a special type of function or method declared inside a class that is automatically invoked when an object of that class is created.

**Need of constructor**:

1. When we need to initialize data members in a more efficient and convenient manner, we can use constructors.
2. Increases code reusability, don't need to write repetative code each object.
3. Constructor is indeed when we require a function that does not have a return type, and can be automatically called without an explicit invocation or call.

```cpp
class Laptop
{
public:
    string modelName;
    int ramSize;
    float price;

    /// constructor
    Laptop(string name, int r, float p)
    {
        modelName = name;
        ramSize = r;
        price = p;
    }
};

int main()
{
    /// creating object
    Laptop Macbook("M1 Pro", 16, 120000);
}
```

&nbsp;

> ## **```(2.c) Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor.```**

```cpp
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    Person *firstPerson = new Person("Subodh", 5.6, 23);

    cout << firstPerson->name << endl;
    cout << firstPerson->age << endl;
    cout << firstPerson->height << endl;

    return 0;
}
```

> ## **```(3.a) What is the size that an object allocates to the memory?```**

The size of an object vary on total size of data members it's class has.

```cpp
/// a class with data members
class Demo
{
public:
    int x;   // 4 bytes
    float y; // 4 byte
    char c;  // 1 byte
};

int main()
{
    Demo obj;
    cout << sizeof(obj) << endl;

    return 0;
}
```

But if there is not data member in a class then that object allocates only 1 byte memory space.

```cpp
/// empty class
class Demo
{
};

int main()
{
    Demo obj;
    cout << sizeof(obj) << endl;

    return 0;
}
```

&nbsp;

> ## **```(3.b) Can you return a static object from a function? If yes, show with an example.```**

It possible to return a static object. In C++, a class acts as a user-defined data type, where the class name represents the data type, and the object is the data to be returned.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    int id;

    Employee(string n, int a, int i)
    {
        name = n;
        age = a;
        id = i;
    }
};

Employee employeeData(string n, int a, int i)
{
    Employee data(n, a, i);

    return data;
}

int main()
{
    Employee person1 = employeeData("Subodh", 22, 333);

    cout << person1.name << " " << person1.age << " " << person1.id << endl;

    return 0;
}
```

&nbsp;

> ## **```(3.c) Why do we need -> (arrow sign)?```**

Once an object is created, we may require access to its data values.   The data values can be accessed using either the dot (.) or arrow (->) operator, depending on the type of object. Data members of a static object can be accessed using dot (.) notation. Whereas, data members of dynamic objects can be accessed using the arrow (->) notation.

```cpp
class Demo
{
public:
    int x;
    float y;
};

int main()
{
    Demo *demoObj = new Demo;
}
```

&nbsp;

> ## **```(3.d) Create two objects of the Person class from question 2-c and initialize them with the proper value. Now compare whose age is greater, and print his/her name.```**

```cpp
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    Person *firstPerson = new Person("Subodh", 5.6, 23);
    Person *secondPerson = new Person("Antu", 5.6, 20);

    if (firstPerson->age > secondPerson->age)
        cout << firstPerson->name << endl;

    else
        cout << secondPerson->name << endl;

    return 0;
}
```
