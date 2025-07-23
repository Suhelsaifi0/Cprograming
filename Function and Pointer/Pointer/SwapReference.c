#include<stdio.h>

  void swap(int* x, int* y){
    int temp; 
    temp = *x;
    *x = *y;
    *y = temp;
    return;
  }

int main(){

    int a=2;
    int b=9;

    swap(&a,&b);
    printf("The Value of A after Swap : %d\n", a);
    printf("The Value of B after Swap %d\n", b);
    
    return 0;
}