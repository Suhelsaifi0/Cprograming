#include<stdio.h>
void main(){

// Addition of Two Diffrent Matrix To Haam Third Matrix me daal denge   
   
//    int r,c;
//    printf("Enter Number of Rows : \n");
//    scanf("%d", &r);
//    printf("Enter Number of Columns : \n");
//    scanf("%d", &c);

   int arr[2][2] = {1,2,3,4};
   int brr[2][2] = {5,6,7,8};

   int mat[2][2]; // We create Third matrix here to store addition
   for(int i=0; i<2; i++){
     for(int j=0; j<2; j++){
        // scanf("%d", &arr[i][j], &brr[i][j]);
        mat[i][j] = arr[i][j] + brr[i][j];
      }
      printf("\n");
   }

    for(int i=0; i<2; i++){
      for(int j=0; j<2; j++){
        printf("%d ", mat[i][j]);
      }
      printf("\n") ;
   }

}