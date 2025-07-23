#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    printf("ENTER NUMBER OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];
    int max = INT_MIN;
    int sMax = INT_MIN;
    printf("ENTER ARRAY : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
         if(arr[i] > max);
         max = arr[i]; // We FIND HERE Largest Element in Array
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] != max && sMax<arr[i]){
            sMax = arr[i];   // We FIND HERE Second Largest Element in Array
        }
    }

    printf("LARGEST ELEMENT : %d\n", max);
    printf("SECOND LARGEST ELEMENT : %d\n", sMax);

    return 0;
}