#include<stdio.h>
void main(){
 
  int num;

  printf("ENTER A TWO DIGIT NUMBER HERE : \n");
  scanf("%d", &num);

  int remainder = num%10;
  int division = num/10;
  int answer = remainder + division;
  printf("SUM OF TWO DIGIT NUMBER ARE : %d \n " , answer);

}