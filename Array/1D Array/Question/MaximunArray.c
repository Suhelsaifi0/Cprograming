#include<stdio.h>
int main(){

    int n;
    printf("ENTER NUMER OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];
    int max = arr[0];
    printf("ENTER ARRAY : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
          if(arr[i] > max){
             max = arr[i];
          }
    }

    printf("MAXIMUN : %d", max);

    return 0;
}