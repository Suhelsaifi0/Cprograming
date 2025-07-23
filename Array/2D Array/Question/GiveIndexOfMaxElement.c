#include<stdio.h>
#include<limits.h>
int main(){

    int r,c;
    printf("ENTER NUMBER OF ROW : ");
    scanf("%d", &r);
    printf("ENTER NUMBER OF COLUMN : ");
    scanf("%d", &c);

    int arr[r][c];
    int max = INT_MIN;
    int maxrow=0,maxcol=0;
    printf("ENTER ARRAY HERE : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
              if(arr[i][j] > max){
                max = arr[i][j];
                maxrow = i;
                maxcol = j;
              }
        }
    }

    printf("INDEX OF MAXIMUN ELEMENT %d %d",maxrow,maxcol);



    return 0;
}


