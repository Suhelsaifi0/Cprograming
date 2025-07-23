#include<stdio.h>
void main(){

  int n,i,count = 0, value;
  printf("Enter Number Here : \n");
  scanf("%d", &n);

  int arr[10];
  printf("Enter Array Here : \n");
  for(i=0; i<n; i++){
     scanf("%d", &arr[i]);
  } 

  printf("Enter Value Here : \n");
     scanf("%d", &value);


  for(i=0; i<n; i++){
    if(arr[i] == value){
        count++;
    }
  }

  printf("Your Total Number of Count is : ");
  printf("%d", count);
  

}