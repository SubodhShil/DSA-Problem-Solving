#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n];

    // input
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // straight iteration
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    // reverse iteration
    for(int i = n - 1; i >= 0 ; i--) {
        printf("%d ", arr[i]);
    }

    
    return 0;
}