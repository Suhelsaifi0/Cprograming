#include<stdio.h>
int main(){

    int n;
    printf("ENTER NUMBER : ");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER ARRAY : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count  = 0;
    int value;
    printf("ENTER VALUE : ");
    scanf("%d", &value);
    for(int i=0; i<=n; i++){ 
         for(int j=i+1; j<=n; j++){
             for(int k=j+1; k<=n; k++){
                 if(arr[i] + arr[j] + arr[k] == value)
                 count++;
             }
         }
    }

    printf("IN THIS ARRAY %d TRIPLET ARE EXIST", count);

    return 0;
}