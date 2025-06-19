#include<stdio.h>
void bubbleSort(int array[], int size) {

    for (int step = 0; step < size - 1; ++step) {
      for (int i = 0; i < size - step - 1; ++i) {
        if (array[i] < array[i + 1]) {
          int temp = array[i];
          array[i] = array[i + 1];
          array[i + 1] = temp;
        }
      }
    }
  }
int main(){
    int n, k;
    scanf("%d%d",&n,&k);

    int actual_price[n];
    int blackmarket_price[n];

    for(int i=0; i<n; i++){
        scanf("%d", &actual_price[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &blackmarket_price[i]);
    }

    int difference_arr[n];
    for(int i=0; i<n; i++){
        difference_arr[i]=blackmarket_price[i]-actual_price[i];
    }
    bubbleSort(difference_arr, n);
    int profit=0;
    for(int i=0; i<k; i++){
        profit=profit+difference_arr[i];
    }
    printf("%d\n", profit);  
  
    return 0;
}