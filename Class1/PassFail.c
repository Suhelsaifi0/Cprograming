#include<stdio.h>
void main(){

    int a, b, c, d;

    printf("ENTER THE MARKS OF ACCOUNTANCY : \n");
    scanf("%d", &a);
    printf("ENTER THE MARKS OF ECONOMICS : \n");
    scanf("%d", &b);
    printf("ENTER THE MARKS OF MATHEMATICS : \n");
    scanf("%d", &c);
    printf("ENTER THE MARKS OF ENGLISH : \n");
    scanf("%d", &d);

    int sum = a+b+c+d;
    int avg = sum/4;
     
    printf("YOUR TOTAL MARKS PERCENTAGE IS : %d \n" , avg); 
    if(avg > 45){
        printf("YOU ARE PASSED");
    }
    else{
        printf("YOU ARE NOT PASSED");
    }
    
}
