#include<stdio.h>
int main(){

    int r,c;
    printf("ENTER NUMBER OF ROW : ");
    scanf("%d", &r);
    printf("ENTER NUMBER OF COLUMN :");
    scanf("%d", &c);

    int arr[r][c];
    int sum = 0;
    printf("ENTER ARRAY : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
            sum = arr[i][j] + sum;
        }
    }

    printf("SUM OF ARRAY : %d",sum);

    return 0;
}