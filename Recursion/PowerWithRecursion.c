#include<stdio.h>
  
  int power(int n){
    // Base Case
    if(n==0) return 1;
    
    int pow = power(n-1);
    return 2*pow;
}

int main(){

    int n;
    printf("ENTER A NUMBER HERE : \n");
    scanf("%d", &n);

    int answer = power(n);
    printf("POWER OF NUMBER %d", answer);

    return 0; 
}