#include<stdio.h>
void main(){

    int row,col;
    printf("Enter Number Rows Here :\n");
    scanf("%d", &row);
    printf("Enter Number Columns Here :\n");
    scanf("%d", &col);

    int arr[50][50];
    int matrix[50][50];
    printf("Enter Array Here : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            //  printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
     
     // Print Array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     // Swap And tranpose
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            matrix[j][i] = arr[i][j];
        }
    }
      
     // Print After Transpose
     printf("Transpose MAtrix : \n");
     for(int i=0; i<col; i++){
         for (int j = 0; j < row; j++){
            printf("%d ", matrix[i][j]);
         }
         printf("\n");  
     } 
}