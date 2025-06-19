#include<stdio.h>

int main(){
    int t;
    printf("Enter the size of array: ");
    scanf("%d", &t);
    int arr[t];
    
    for(int i = 0; i < t; i++){
        printf("Enter the element %d: ", i + 1);
    }

    return 0;
}