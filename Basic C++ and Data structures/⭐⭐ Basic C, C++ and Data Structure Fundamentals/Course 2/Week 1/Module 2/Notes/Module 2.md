> # ```Module 2```

There are two types memory that are used to storing programming instructions:

1. **<ins>Stack Memory</ins>**: Compile time memory.
    C, C++ languages are run after compilation. Compilation process is alike a police checkpoint, where it checks everything of a program is valid according to the rule. During compile time if the compiler finds anything that is not actually go fine with the rule of that langauge more precisely if compiler ecounters any syntactical mistake then it shows the compile time error.

    - Stack memory stores static values or primitive variables (like integer, float, boolean, char). Once it stores or allocates any size of a variable in stack memory, it is not possible to change the size (adding more space or reducing space). But this is not versatile for a changing requirement of modern application.
    - Stack stores various function call in an order which the latest function will uplift older function calls. So, Last in First Out.
    - Once the work of an function call is over all content in that array will also be removed from the memory. Here, we're describing a code that represent us an error:

    ```
    int *func()
    {

    }

    int main()
    {

    }
    ```

2. **<ins>Heap Memory</ins>**: Heap memory is also known as **runtime memory**. Runetime errors are more off a logical error but it didn't found initially in compile time. When the program runs, the program comes up with various errors or crashs that of this occurs. For example, segmentation error. An example of it is,

    ```
    int x = 10 / 0;
    ```

    Aforementioned code is not syntactically wrong, so compiler will compile and run. But since **10 / 0** is logically incorrect so it will end up with Time limie exceed type of error.

3.
