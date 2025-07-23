#include<stdio.h>

  void takeInput(int row, int col, int arr[row][col]){
       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
          }
       }
  }

  void print2Darray(int row, int col, int arr[row][col]){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
  }

int main(){

    int row, col;
    printf("ENTER NUMBER OF ROW : ");
    scanf("%d", &row);
    printf("ENTER NUMBER OF COLUMN : ");
    scanf("%d", &col);

    int arr[row][col];
    takeInput(row, col, arr);
    print2Darray(row, col, arr);

    return 0;
}