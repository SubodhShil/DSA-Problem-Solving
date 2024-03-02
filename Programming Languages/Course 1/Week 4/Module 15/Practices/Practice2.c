#include <stdio.h>

int main()
{
    double x = 7.86;
    double *ptr = &x;
    double *ptr2 = &x;
    double **ptr3 = &ptr2;
    printf("x = %0.2lf\n", x);
    printf("x (*ptr) = %0.2lf\n", *ptr);
    printf("x (*ptr2) = %0.2lf\n", *ptr2);
    printf("x (**ptr3) = %0.2lf\n", **ptr3);

    **ptr3 = 200.55;
    printf("After dereferencing of double pointer ptr3\n---------------------------\n");
    printf("x = %0.2lf\n", x);
    printf("x (*ptr) = %0.2lf\n", *ptr);
    printf("x (*ptr2) = %0.2lf\n", *ptr2);
    printf("x (**ptr3) = %0.2lf\n", **ptr3);

    return 0;
}