#include<stdio.h>
void main(){

  int l , b;

  printf("ENTER LENGTH : \n");
  scanf("%d", &l);
  printf("ENTER BREADTH : \n");
  scanf("%d", &b);

  int area = l*b;
  int perimeter = 2*(l+b);

  printf("AREA OF RECTANGLE IS : %d \n", area);
  printf("PERIMETER OF RECTANGLE IS : %d \n", perimeter);
 

}