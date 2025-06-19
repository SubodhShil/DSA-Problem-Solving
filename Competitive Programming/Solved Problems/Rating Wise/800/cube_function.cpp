#include<stdio.h>
int cube(int x)
{
    int a=x*x*x;
    return a;
}
int main()
{
    int base;
    printf("Enter any number:\n");
    scanf("%d",&base);
    printf("%d ^ 3 = %d",base,cube(base));
    return 0;
}