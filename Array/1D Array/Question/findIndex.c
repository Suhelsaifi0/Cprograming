#include <stdio.h>

int main() {

  // Find the Index of An Array   
  int n, i ,value;
  printf("Enter Number : \n");
  scanf("%d", &n);

  int arr[10];
  printf("Enter Array Here : \n");
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  printf("Enter Value Here You Find Index : \n");
  scanf("%d", &value); 

  printf("Your Array Index is : ");
  for(int i=0; i<n; i++){
  if(value == arr[i]){
    printf("%d", i);
  }
}

  return 0;
}