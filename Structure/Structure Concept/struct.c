#include<stdio.h>
struct address{
    char street[50];
    char city[50];
    int zip;
};
struct student{
    char name[50];
    int roll;
    struct address address;
};
void main(){
    struct student s1;
    printf("Enter student name ");
    scanf("%s",&s1.name);
    printf("Enter student roll ");
    scanf("%d",&s1.roll);
    printf("Enter street ");
    scanf("%s",&s1.address.street);
    printf("Enter city ");
    scanf("%s",&s1.address.city);
    printf("Enter zip ");
    scanf("%d",&s1.address.zip);

    printf("name %s\n",s1.name);
    printf("student roll %d\n",s1.roll);
    printf("street %s\n",s1.address.street);
    printf("street %s\n",s1.address.city);
    printf("zip %d\n",s1.address.zip);
}