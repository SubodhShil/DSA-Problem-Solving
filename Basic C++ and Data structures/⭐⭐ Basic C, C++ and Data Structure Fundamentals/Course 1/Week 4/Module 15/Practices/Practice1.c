#include <stdio.h>

int main()
{
    int x = 100;

    /// storing pointer value while declaring the pointer
    // int *ptr = &x;

    /// storing address value at the time of pointer declaration
    int *ptr = NULL;

    /// storing address once pointer is declared
    /// redefine pointer value can also be done by the similar way
    /// now, address of x == value of ptr
    ptr = &x;

    /// invoke address of a pointer
    /// double pointer to store a address of pointer in a pointer
    int **pointerOfPointer = &ptr;
    printf("x address = %p\n", &x);
    printf("ptr value = %p\n", ptr);
    printf("-----------------------\n");

    /// changing value of actual variable
    x = 300;
    /// changing value of actual variable through
    /// pointer dereferencing
    *ptr = 400;

    printf("x value = %p\n", &x);
    printf("value stored at ptr = %d\n", *ptr);
    printf("-----------------------\n");

    /// double pointers
    printf("ptr address = %p\n", &ptr);
    printf("pointerOfPointer address value = %p\n", pointerOfPointer);
    /// dereferencing double pointer
    printf("value at pointerOfPointer = %p\n", pointerOfPointer);

    return 0;
}