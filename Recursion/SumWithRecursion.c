#include<stdio.h>

 int sum(int n){
    if(n==0 || n==1) return 1;

    int add = n + sum(n-1);
    return add;
 }


int main(){

    int n;
    printf("ENTER A NUMBER HERE : \n");
    scanf("%d", &n);

    int answer = sum(n);
    printf("SUM OF NUMBER : %d", answer);

    return 0; 
}