#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int cost[n+1];
    for(int i=1; i<n+1; i++){
        scanf("%d", &cost[i]);
    }

    int pow_i=0;
    int pow_two_array[n];
    for(int i = 1; i< n+1; i++) {
        pow(2, pow_i);
        pow_i++;
    }
    return 0;
}