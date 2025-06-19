#include<stdio.h>

int main(){
    
    int t,input;
    scanf("%d",&t);
    int ar[t];
    
    for(int i=0; i<t ; i++)
    {
        scanf("%d",&ar[i]);
    }
    
    scanf("%d",&input);
    int count=-1;
    for(int i=0; i<t ; i++)
    {
        if(input == ar[i])
        {
            printf("%d\n",i);
            count=1;
            break;
        }
        
    }
    if(count == -1)
    {
        printf("%d\n",count);
    }
    return 0;
}