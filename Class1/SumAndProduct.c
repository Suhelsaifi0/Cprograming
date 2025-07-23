#include<stdio.h>
void main(){

   int a,b;
   
   printf("ENTER THE NUMBER HERE : \n");
   scanf("%d %d", &a, &b);

   int sum = a+b;
   int product = a*b;

   printf("Sum of Two Number Are : %d \n", sum);
   printf("PRoduct of Two Number Are : %d \n" , product);

}