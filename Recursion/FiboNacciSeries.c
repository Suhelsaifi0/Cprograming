#include<stdio.h>

 int fibo(int n){
    if(n==0 || n==1) return 1;

    int fibon = fibo(n-1) + fibo(n-2);
    return fibon;
 }


int main(){

    int n;
    printf("ENTER A NUMBER HERE : \n");
    scanf("%d", &n);

    int answer = fibo(n);
    printf("FIBONACCI SERIES : %d", answer);

    return 0; 
}