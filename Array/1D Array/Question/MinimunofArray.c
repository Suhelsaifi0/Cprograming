#include<stdio.h>
int main(){

    int n;
    printf("ENTER NUMER OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];
    int min = arr[0];
    printf("ENTER ARRAY : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
          if(arr[i] < min){
             min = arr[i];
          }
    }

    printf("MINIMUM : %d", min);

    return 0;
}