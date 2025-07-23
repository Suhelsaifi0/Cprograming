#include<stdio.h>
int main(){

    int r,c;
    printf("ENTER ROW : ");
    scanf("%d", &r);
    printf("ENTER COLUMN : ");
    scanf("%d", &c);

    int arr[r][c];
    int max = arr[0][0];
    printf("ENTER ARRAY : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
             if(arr[i][j] > max);
             max = arr[i][j];
        }
    }

    printf("LARGEST ARRAY : %d", max);




    return 0;
}