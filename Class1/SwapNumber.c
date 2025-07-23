#include<stdio.h>
void main(){


    int temp;
    int a, b;

    printf("ENTER THE VALUE OF A : \n");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B : \n");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Value Of A After Swap : %d \n", a);
    printf("Value Of B After Swap : %d \n", b);

}