#include<stdio.h>

int main(){

  int n;
  printf("ENTER THE NUMBER OF ARRAY : ");
  scanf("%d", &n);

  int arr[n];
  int product = 1;
  
  printf("ENTER THE ARRAY : ");
  for(int i=0; i<n; i++){
     scanf("%d", &arr[i]);
     product = product * arr[i];
  }

  printf("SUM OF ARRAY ARE : %d ", product);

  return 0;
}