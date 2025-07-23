#include<stdio.h>
int main(){

    int n;
    printf("ENTER NUMBER OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER ARRAY : ");
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
          
          if(i % 2 != 0){
              int oddMultiple = arr[i]*2;
              int evenMultiple = arr[i] + 10;
              printf("ODD INDEX : %d \n", oddMultiple);
              printf("EVEN INDEX : %d\n", evenMultiple);
          }

    }
    
    return 0;
}