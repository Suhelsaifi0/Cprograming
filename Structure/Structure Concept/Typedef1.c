#include<stdio.h>

  typedef struct book{
     char name[20];
     int noOfPage;
     float price;
  }book;

int main(){

   book a;  
   book b;
   book c;
   book d;

   a.noOfPage = 200;
   printf("%d",a.noOfPage);

    return 0;
}