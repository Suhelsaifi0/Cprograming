#include<stdio.h>
#include<string.h>
int main(){

    typedef struct date{
         int date;
         int month;
         int year;
    }date;

    date a,b;
    // a-> 07/12/2002
    // b-> 25/12/2024
    a.date = 07;
    a.month = 12;
    a.year = 2002;

    b.date = 25;
    b.month = 12;
    b.year = 2024;

    if(a.date == b.date){
        printf("Dates are same"); 
    }
    else{
        printf("Dates are not equal");
    }

    return 0;
}