#include<stdio.h>
void main(){

    int n , i;
    printf("Enter Number Here : ");
    scanf("%d", &n);

    int arr[10];
    printf("Enter Array Here :");
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int ispalidrome = 1;
       for(int i=0; i<n/2; i++){
           if(arr[i] != arr[n-i-1]){
            ispalidrome = 0;
            break;
           }
       }

       if(ispalidrome){
        printf("The Array is Palindrome.\n");
       }
       else{
        printf("The Array is Not Palindrome.\n");
       }
}