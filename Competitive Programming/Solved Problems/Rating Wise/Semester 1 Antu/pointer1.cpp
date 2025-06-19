#include <stdio.h>

void testFunc(int *b) {
    *b = (*b) * 2;
    printf("Value of b in testFunc() = %d\n", *b);
}

int testFunc2(int b, int c) {
    return b * 2;
}

void testFunc3(int *b, int *c) {
    *b = (*b) * 2;
    *c = (*c) * 2;
}


int main() {
/* 
    // primitive data types
    int a = 100;
    printf("a = %d\n", a);

    // Pointer that points a primitive data types
    // (data type of pointer pointing to the variable) *(pointer name) = &(variable name)
    int *ptr = &a;

    // The address is a hexadecimal number
    printf("Address ptr is holding (address of variable a) = %p\n", ptr);

    // Dereferencing
    // To the see the value of the address ptr is holding, we need to dereference the pointer
    printf("Value of the address the ptr is holding (value of variable a) = %d\n", *ptr);

    // Change the value of the variable a using the pointer
    *ptr = 200;
    printf("Value of the address the ptr is holding (value of variable a) = %d\n", *ptr);

    printf("Current value of a = %d\n", a);

 */
    int b = 700, c = 500;
    printf("Before calling the function testFunc() value of b is: %d\n", b);
    // if you want to change the value of a variable in a function, you need to pass the address of the variable
    // testFunc(&b);
    // b = testFunc2(b);
    testFunc3(&b, &c);
    // printf("After calling the function testFunc() value of b is: %d\n", b);
    printf("After calling the function testFunc() value of b and c is: %d %d\n", b, c);
}