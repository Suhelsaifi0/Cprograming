#include<stdio.h>

   int factorial(int n){
    //   int fact = 1;
    //   for(int i=2; i<=n; i++){
    //     fact = fact * i;
    //   }
    // return fact;  
    
    // Base Case
    if(n==1 || n == 0) return 1;
    return n*factorial(n-1);

 }

int main(){

    int n;
    printf("ENTER A NUMBER HERE : \n");
    scanf("%d", &n);

    int answer = factorial(n); 
    printf("FACTORIAL OF NUMBER : %d", answer);

    return 0; 
}