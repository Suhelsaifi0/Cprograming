#include<Stdio.h>
void main(){

    int r,c;
    printf("Enter Number of Rows : \n");
    scanf("%d", &r);
    printf("Enter Number of Columns : \n");
    scanf("%d", &c);

    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
       for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("Sum of Matrix : %d ", sum);

}