#include<stdio.h>
#include<string.h>
int main(){

    // int a[4] = {1,2,3,4};
    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]); 

    char ch = 'A'; // Character 
    char arr[5] = "Hello";
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);

    return 0;
}