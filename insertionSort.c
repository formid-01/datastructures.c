#include <stdio.h>

void insertionSort(int D[], int n){ 
    int i, j, key;                  
    for(i = 1; i < n; i++){           
        key = D[i];

        for(j = i-1; j >= 0 && key <= D[j]; j--){
            D[j+1] = D[j];   
        }
         D[j+1] = key;
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

      printf("\n\nAfter Insertion Sort Operation ");
      insertionSort(D, n);
      
      printf("Your Array:\n");
      for (j = 0; j < n; j++) {
      printf("%d\t", D[j]);
     }

     return 0;

}
