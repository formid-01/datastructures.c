#include <stdio.h>

void selectionSort(int D[], int n){
    int i, j, index, min;

    for(i = 0; i < (n-1); i++){
       min = D[n-1];
       index = n-1;

       for(j = i; j < (n-1);j++){
        if(D[j] < min){
            min = D[j];
            index = j;
        }
       }

       if(i != index){
        D[index] = D[i];
        D[i] = min;
       }
    }
}

int main(){

    int n,i,j;
   
    printf("Please enter an array size: ");
    scanf("%d", &n);

    int D[n];

      for(i = 0; i < n; i++){

        printf("%d. index of array's value: ", i);
        scanf("%d", &D[i]);
      }

      printf("\n\nAfter Selection Sort Operation ");
      selectionSort(D, n);
      
      printf("Your Array:\n");
      for (j = 0; j < n; j++) {
      printf("%d\t", D[j]);
     }

     return 0;
}
