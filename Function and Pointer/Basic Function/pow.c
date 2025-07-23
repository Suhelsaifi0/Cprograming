#include<stdio.h>
#include<math.h>

int main(){

    int x,y;
    printf("Enter a number X : ");
    scanf("%d", &x);
    printf("Enter a number Y : ");
    scanf("%d", &y);

    int power = pow(x,y);
    printf("Square root of number : %d ", power);
    
    return 0;
}