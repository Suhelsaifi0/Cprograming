#include<stdio.h>
void main(){

  int num;

  printf("Enter Number here\n");
  scanf("%d", &num);

  if(num>=50 && num<=100){
    printf("Number is the Range of Between 50 and 100 ");
  }
  else{
    printf("Number is Not Range of Between 50 and 100 ");
  }

}