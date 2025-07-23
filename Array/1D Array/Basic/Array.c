#include<stdio.h>
void main(){

    int r, c;
    printf("Enter the Number of Rows : \n ");
    scanf("%d", &r);
    printf("Enter the Number of Columns : \n ");
    scanf("%d", &c);

    int arr[r][c];
    
    // Input
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Prinitng 2D Array Here : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}