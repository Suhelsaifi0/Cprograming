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

    int even = 0 ,odd=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            even = arr[i] + even;
        }
        else if(i%2 != 0){
            odd = arr[i] + odd;
        }
    }

    int differnce = even - odd;
    printf("DIFFERNCE : %d", differnce);

    return 0;
}