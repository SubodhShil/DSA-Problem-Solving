//! Resources: Deitle C How to Program book

#include <bits/stdc++.h>
using namespace std;

class Practice
{
public:
    void practice1()
    {
        char ch = 'A';
        char *ptr_ch = &ch;
        cout << *ptr_ch << endl;
        cout << sizeof(ptr_ch) << endl;

        char *countPtr, count = 100;
        cout << count << endl; // output: d

        int *countPtr2, value = 123;
        char count2 = 10;
        // countPtr2 = &count2;
        countPtr2 = &value;
        cout << countPtr << endl;
    }

    void practice2()
    {
        //! Indirection
        int var1 = 100, var2 = 200, var3 = 300;
        int *ptr;
        ptr = &var1;
        // to print the address just mention the pointer variable literal
        cout << ptr << endl;
        // to print the value of the variable through the pointer use astrisk sign (*)
        //** dereferencing or indirection
        cout << *ptr << endl;

        //* as like variable delcaration we can declare multiple variable separeted by comma (,) but in this case we have to delcare multiple pointer variables pointing to the same type, it's indeed to give a astrisk sign before the pointer variable identifier

        //! the data type mentioned before the pointer name is actually the data type of that variable it's actually referencing or pointing to
        //* every pointer is behind the seen an unsigned integer variable, since it's only capable of storing address of other variables which can't be other than integer value

        //! why pointer can points to any data type though it's an integer variable itself? => address of any variable irrespective to it's corresponding data type, the address value remain integer number which denots address of variable with any data type is always integers. and we know that pointers are only capable of storing integers so, pointers poniter can points to any data type

        //* Best practice: pointers variable should be written with "ptr" word

        int *ptr2, ptr3; // here *ptr is pointer and on the other hand ptr3 is a simple variable
        ptr2 = &var2;
        // ptr3 = &var3; // error

        int *ptr4, *ptr5;
    }

    void practice3()
    {
        int *noPtr = NULL;
        cout << noPtr << endl;

        //! We must be careful about dereferencing. While it can modify value unintentionally and occurs a ambiguity
        int var = 10;
        int *ptr = &var;
        *ptr = 20;
        cout << "var = " << var << endl;
        cout << "ptr = " << ptr << endl;
        cout << "*&ptr = " << *&ptr << endl;
        cout << "&*ptr = " << &*ptr << endl;

        if (*&ptr == ptr && ptr == &*ptr)
            cout << "ptr, *&ptr and &*ptr are All are the same" << endl;
    }

    void cubeByReference(int *ptr)
    {
        *ptr = pow(*ptr, 3);
        cout << "*ptr = " << *ptr << endl;
    }

    void practice4(int *nPtr, int *nPtr2, int *nPtr3)
    {
        //* To modify multiple variables from a calling function in a called function, use call-by-reference.
        //! but call by value can only change one variable's value from the caller function at a time, and that is also possible when you're explicitly assigning the returning value to that particular variable
        *nPtr += 1;
        *nPtr2 += 2;
        *nPtr3 += 3;
    }

    void practice5()
    {
        float x = 2134.55, x2 = 120.33;
        const float *ptr = &x;
        cout << *ptr << " " << x << endl;
        cout << ptr << " " << &x << endl;

        //* with constant pointers it is not possible to change the value of it's pointing variable
        // *ptr = 1;
        // cout << x << endl;

        // but it seems weird that, constant pointers can reassigned with new adddress or can be pointed to a new variable
        ptr = &x2;
        cout << *ptr;
    }

    void practice6(char *sPtr)
    {
        //! Question: Converting a String to Uppercase Using a Non-Constant Pointer to Non-Constant Data
        while (*sPtr != '\0')
        {
            if (islower(*sPtr))
                *sPtr = toupper(*sPtr);

            ++(sPtr);
        }
    }
};

int main()
{
    int n = 1, n1 = 20, n2 = 300;
    char s[] = "love, robots and machines";
    Practice obj;
    // obj.practice1();
    // obj.practice2();
    // obj.practice3();

    // obj.cubeByReference(&n);
    // cout << "New value of n is: " << n << endl;

    // obj.practice4(&n, &n1, &n2);
    // cout << "New values: " << n << " " << n1 << " " << n2 << " " << endl;

    // obj.practice5();

    //** array or string passes the address so, we don't have to mention &
    // obj.practice6(&s[0]);
    obj.practice6(s);     // as argument a string always passes the addres of the it's first element
    obj.practice6(&s[2]); //! Quiz, guess

    return 0;
}