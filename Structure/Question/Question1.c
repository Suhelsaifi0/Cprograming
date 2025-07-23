#include <stdio.h>
#include <string.h>

struct person{
    char name[10];
    int age;
    int salary;
    char companyName[25];
} p1, p2;

int main()
{

    strcpy(p1.name, "Suhel Saifi");
    p1.age = 22;
    strcpy(p1.companyName, "Microsoft");
    p1.salary = 180000;

    strcpy(p2.name, "Syed Zaid Ashraf");
    p2.age = 23;
    strcpy(p2.companyName, "Amazon");
    p2.salary = 180000;

    printf("Name of Person is : %s\n", p1.name);
    printf("Age of Person is : %d\n", p1.age);
    printf("Company name of Person is : %s\n", p1.companyName);
    printf("Salary of Person is : %d\n", p1.salary);

    printf("Name of Person is : %s\n", p2.name);
    printf("Age of Person is : %d\n", p2.age);
    printf("Company name of Person is : %s\n", p2.companyName);
    printf("Salary of Person is : %d\n", p2.salary);

    return 0;
}