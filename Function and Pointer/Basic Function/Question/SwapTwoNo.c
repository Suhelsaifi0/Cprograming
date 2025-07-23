#include<stdio.h>

  void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    return;
  }

int main(){

    int a,b;
    printf("Enter A : \n");
    scanf("%d", &a);
    printf("Enter B : \n");
    scanf("%d", &b);

    // int temp = a;
    // a = b;
    // b = temp;
    swap(a,b);
    printf("Swap two number are : %d %d", a, b);
    
    return 0;
}