#include<stdio.h>

  int add(int x, int y){  // Yaha Par a or b ki Value aagee
      int add = x + y;
      return add;
  }

int main(){

    int a,b;
    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);

    int sum = add(a,b);
    printf("Sum : %d", sum);

    return 0;
}