#include<stdio.h>

int main(){

  int n;
  printf("ENTER THE NUMBER OF ARRAY : ");
  scanf("%d", &n);

  int arr[n];
  int sum = 0;
  
  printf("ENTER THE ARRAY : ");
  for(int i=0; i<n; i++){
     scanf("%d", &arr[i]);
     sum = sum + arr[i];
  }

  printf("SUM OF ARRAY ARE : %d ", sum);

  return 0;
}