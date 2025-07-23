#include<stdio.h>
void main(){

    int num;

    printf("ENTER NUMBER HERE :\n");
    scanf("%d", &num);

    int remainder = num%10;
    int division = num/10;
    // int answer = remainder+division;

    printf("Least Significant : %d", remainder);
}