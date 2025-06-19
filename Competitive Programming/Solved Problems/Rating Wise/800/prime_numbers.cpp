#include<stdio.h>
int main()
{
    int start,end,divisibility;

    printf("Range from:\n");
    scanf("%d",&start);

    printf("To:\n");
    scanf("%d",&end);

    printf("Prime Number from %d to %d\n",start,end);
    for(int i=2;i<=end;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if ( i%j == 0)
            {
                count=count+1;
            }
          
        }
          if(count<=2)
            {
            printf("%d ",i);        
            }

    }
    return 0;
}