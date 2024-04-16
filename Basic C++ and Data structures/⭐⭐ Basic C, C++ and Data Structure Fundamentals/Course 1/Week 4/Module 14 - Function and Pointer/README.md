> # ```Functions```

Function are collection of statements work together to accomplish various task.

<ins>**Syntax**</ins>

```
return_type function_name(parameter_list or void)
{
    /// statements
}
```

1. C and C++ functions are only able to return a single value of any premitive or user defined type.

2. Function could be passed with user input values. In this regard we can divide functions into two parts:
    - **Call by value**
    - **Call by reference**

3. The parameter are variable that are local to the function, used to receive data passed by the caller.

4. Function parameter can be set to a default value (only works for C++, C don't support default argument values). If user or caller of the function don't pass any value then it will use the default value.

5. **return_type** is the data type the function tend to return

6. Function can have one parameter or multiple parameter (seperated by comma). In contrast, a functino without any parameter can be ommited with keyword **void**, alternatively you can also left the place blank. But both of them are not entirely similar.
    - using **void** keyword: Passing any value will cause error.

    ```
    string sayHello(void)
    {
        return "Hello";
    }

    int main()
    {
        cout << sayHello("David"); /// error
    }
    ```

    - blank parameter list: Even if caller passed value, the value won't be utilized rather ignored by the compiler.

    ```
    string sayHello()
    {
        return "Hello";
    }

    int main()
    {
        cout << sayHello("David"); /// won't create any error
    }
    ```

7. Four ways to use a function:
    1. Return type + parameter
    2. Return type + no parameter
    3. No return type + parameter
    4. No return type + parameter

8. Based on return type we can come into two conclusions:
    1. When a function returns some value, it must be stored or utilized, as the function generates a value in response to its invocation.

    &nbsp;

    By storing:  
    Value saved into a variable

    ```
    /// calling a user defined function and calling it into a variable
    int x = sum();
    ```

    By utilizing:  
    The function is called and its return value is printed to the console using cout

    ```
    /// calling a user defined function without saving into variable
    cout << sum << endl;
    ```

    2. You cannot assign a void function to a variable because it does not return a value. A void function can only be called as a standalone statement.  
    Usecase:  
    (1) Void function should be used when you're only about to execute the result in the console without storing it in any variable.  

    ```
    void helloWorld()
    {
        cout << "Hello world" <<endl;
    }

    int main()
    {
        helloWorld(); /// result will shown in the console
        // int result = helloWorld(); // shows error
        // cout << helloWorld(); // shows error
    }
    ```

    (2) Void functions can be used to modify the actual value of various data structures such as sorting of an array or updating values of a variable declared in the main function or local space without returning any value.

    ```
    vector<int> v{5, 1, 15, 7};

    /// built in STL function
    sort(v.begin(), v.end());
    ```

    3. The return statement in a void function serves as a termination point (since void functions can't return any value), causing the function to stop processing any further. However, unlike a return statement in a function that has a return type, a return statement in a void function does not return a value

    ```
    void printN(int n)
    {
        /// stops when value of 'n' gets 0
        if(n == 0)
            return;

        cout << n << endl;
    }
    ```

    4. The first return statment is the termination point.

    ```
    void printN(int n)
    {
        if(n % 2 == 0)
            return;

        if(n % 3 == 0)
            return;

        cout << n << endl;
    }

    int main()
    {
        /// first if statement works out and stop execution
        printN(10); 

        /// second if statement works out and stop execution
        printN(9);

        /// prints 1 since no statement works out
        printN(1);
    }
    ```

<p align="center" style="font-size:22px"> <b>Built in functions</b> </p>

C and C++ programming language packed with a handful amount of built in functions, each contained in various header files:

1. ceil(x): rounds up to the next integer if any fraction is present.
2. floor(x): rounds down to the previous integer if any fraction is present.
3. round(x): rounds to the next integer if the number is greater than or equal to n.5; otherwise, it rounds down to the previous integer.
4. sqrt(x): calculates the square root of the value.
5. pow(a, b): takes two values, a and b, and calculates a raised to the power of b.
6. abs(x): returns the absolute value of the input, which is positive if the input is negative and positive otherwise.

<p align="center" style="font-size:22px"> <b>Scope</b> </p>

A function's parameter is local to the function body and any changes made to it will not affect the actual variable value because functions receive variables as call by value. When caller passes a value to a function, the parameter actually make a copy of the value and invoke to itself.

```
void valueCheck(int a, int b)
{
    a = 100;
    b = 200;
}

int main()
{
    int a = 10, b = 20;
    valueCheck(a, b);

    /// value of 'a' and 'b' will remain same
    cout << a << " " << b << endl;
}
```

<p align="center" style="font-size:22px"> <b>Pointer</b> </p>

Pointer is a special type of variable that only stores the address of a variable.

Character pointer: Character pointers are special because cout treats them differently than other types of pointers. When cout sees a char * argument, it treats it as a pointer to a null-terminated string and prints the string that starts at the address pointed to by the pointer.

To print the memory address stored in a char *pointer, we need to explicitly cast it to a void* pointer, which is a generic pointer type that can hold the address of any data type.

For other pointer types like float *, int*, and bool *, cout treats them as pointers to the respective data types and prints their memory addresses without requiring any typecasting.
