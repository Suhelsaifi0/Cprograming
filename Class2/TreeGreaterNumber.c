#include<stdio.h>
void main(){

  int a,b,c;
  printf("Enter Value A \n");
  scanf("%d", &a);
  printf("Enter Value B \n");
  scanf("%d", &b);
  printf("Enter Value C \n");
  scanf("%d", &c);

  if(a>b){
    printf("A is greater");
  }
  else if(b>c){
    printf("B is greater");
  }
  else if(c>a){
     printf("C is greater");
  }

}