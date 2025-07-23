#include<stdio.h>
void main(){

  int a, b, c;

  printf("ENTER NUMBER HERE : \n ");
  scanf("%d %d %d", &a, &b, &c);

  int sum = a+b+c;
  int average = (a+b+c)/3;

  printf("Sum Of Three Number Are : %d \n" , sum);
  printf("Average of Three Number Are : %d \n", average); 

}