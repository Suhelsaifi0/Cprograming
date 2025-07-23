#include<stdio.h>
void main(){

    int r;

    printf("Enter Radius \n");
    scanf("%d", &r);

    int area = 3.14*r*r;
    int curcum = 2*3.14*r*r;
    printf(" Area of Circle is : %d \n", area);
    printf("Circumference of Circle : %d \n", curcum);

}