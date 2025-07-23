#include<stdio.h>
void main(){

   int r,c;
   printf("Enter Number of Rows : \n ");
   scanf("%d", &r);
   printf("Enter Number of Columns : \n ");
   scanf("%d", &c);
   
   int a[r][c], b[r][c], Result[r][c];

   // Take Input Element for Matrix A
   for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
        scanf("%d", &a[i][j]);
      }
   }
   
    // Take Input Element for Matrix B
    for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
        scanf("%d", &b[i][j]);
      }
   }
   
    // Calculate the sum of matrices A and B, store in C
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           Result[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print Element
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

}   