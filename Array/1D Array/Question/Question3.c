#include<stdio.h>
int main(){

    int n;
    printf("ENTER NUMBER HERE : ");
    scanf("%d", &n);

    int arr[n];
    int count = 0;
    int value;
    printf("ENTER ARRAY : ");
     for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("ENTER VALUE : ");
    scanf("%d", &value);
    for(int i=0; i<n;i++){
        if(arr[i] > value){
            count++;
        }
    }

    printf("TOTAL %d NUMBER ARE GREATER THEN VALUE ", count);

    return 0;
}