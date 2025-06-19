#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int ar[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    printf("%d is the sum\n",sum);
    return 0;
}