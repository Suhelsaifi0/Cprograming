#include<stdio.h>
int main(){

    int r,c;
    printf("ENTER NUMBER OF ROW : ");
    scanf("%d", &r);
    printf("ENTER NUMBER OF COLUMN : ");
    scanf("%d", &c);

    int arr[r][c];
    int brr[r][c];
    int crr[r][c];

    printf("ENTER ONE MATRIX ARRAY -> ARR : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }    
    
    printf("ENTER SECOND MATRIX ARRAY -> BRR : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &brr[i][j]);
        }
    }    
    
    printf("SUM OF TWO MATRIX IS : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            crr[i][j] = arr[i][j] + brr[i][j];
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
    
    // printf("SUM OF TWO MATRIX IS : ");
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         printf("%d ", crr[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}