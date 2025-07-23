#include <stdio.h>

int main() {

  // Find the Even Number of An Array   
  int n, i, count = 0 ;
  printf("Enter Number : \n");
  scanf("%d", &n);

  int arr[10];
  printf("Enter Array Here : \n");
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("Total Number Of Even Array : ");
  for(i=0; i<n; i++){
     if(arr[i] % 2 == 0){
        count++;
        printf("%d ", arr[i]);
     }
  }
  printf("Total Count : %d", count); 

  return 0;
}