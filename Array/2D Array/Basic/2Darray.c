#include<stdio.h>

int main(){

    int r,c;     
    printf("ENTER NUMBER OF ROW :");
    scanf("%d", &r);
    printf("ENTER NUMBER OF COLUMN : ");
    scanf("%d", &c);

    int arr[r][c];
    printf("ENTER ARRAY :");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("PRINTING ARRAY : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
             printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}