#include<stdio.h>
#include<string.h>

 typedef struct person{
    char name[10];
    int age;
    int weight;
 }person;

int main(){

    person a;
    strcpy(a.name, "Suhel Saifi");
    a.age = 23;
    a.weight = 69;
    
    person* x = &a;  
    printf("%p\n", x); 

    printf("%p\n", &a.age); 
    printf("%p\n", &a.weight); 
    printf("%p\n", a.name); 
    return 0;
}