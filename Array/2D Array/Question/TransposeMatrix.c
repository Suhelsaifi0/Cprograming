#include<stdio.h>
int main(){

    int r,c;
    printf("ENTER NUMBER OF ROW : ");
    scanf("%d", &r);
    printf("ENTER NUMER OF COLUMN : ");
    scanf("%d", &c);

    int arr[r][c];
    int transpose[r][c];
    printf("ENTER ARRAY HERE : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            transpose[j][i] = arr[i][j];
        }
    }

    printf("TRANSPOSE : \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}