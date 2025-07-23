#include <stdio.h>
#include<string.h>
void main()
{
    struct book
    {
        char Name[30];
        int price;
        int noOfPage;
        char Author[30];
    }a,b,c;

    // a.Name = "Rich Dad poor Dad";
    strcpy(a.Name, "Rich dad poor dad");
    // a.Name[0] = "R";
    a.noOfPage = 100;
    a.price = 400;
    
     strcpy(b.Name, "Do it today");
    b.noOfPage = 120;
    b.price = 350;

    printf("Number of Page in Book A : %d\n", a.noOfPage);
    printf("Number of Price Book A : %d\n", a.price);
    printf("Number of Page in Book B : %d\n", b.noOfPage);
    printf("Number of Price Book B :%d\n", b.price);
    printf("Name of the A Book is : %s\n", a.Name);
    printf("Name of the B Book is : %s", b.Name);
}
