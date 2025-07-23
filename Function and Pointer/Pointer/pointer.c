#include<stdio.h>
int main(){

    int a = 7;
    int* x = &a;
    *x = 7;
    // printf("%p\n", x);
    //printf("%p\n", &x);
    printf("%p\n", a);

    return 0;
}