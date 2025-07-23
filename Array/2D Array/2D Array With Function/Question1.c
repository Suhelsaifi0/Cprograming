#include<stdio.h>

 void processArray(int row, int col, int arr[row][col], int brr[row][col], int result[row][col]){
      for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            result[i][j] = arr[i][j] + brr[i][j];
        }
     }
 }


int main(){

    int row, col;
    printf("ENTER NUMBER OF ROW :");
    scanf("%d", &row);
    printf("ENTER NUMBER OF COLUMN :");
    scanf("%d", &col);

    int arr[row][col];
    int brr[row][col];
    int result[row][col];

    printf("ENTER THE FIRST ELEMENT OF 2D ARRAY : ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("ENTER THE SECOND ELEMENT OF 2D ARRAY : ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &brr[i][j]);
        }
    }

    processArray(row, col, arr, brr, result);

    printf("PRINTING ARRAY : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}