#include <stdio.h>
#include <string.h>
int main(){
    typedef struct criketer{
        char name[10];
        int age;
        int noOfTest;
        float average;
    } criketer;

    criketer arr[3]; // Array of Structure

    // strcpy(arr[0].name, "Virat Kohli");
    // arr[0].age = 30;
    // arr[0].noOfTest = 100;

    // strcpy(arr[1].name, "Rohit Sharma");
    // arr[1].age = 32;
    // arr[1].noOfTest = 120;

    for (int i = 0; i < 3; i++){
        printf("Enter Name\n");
        scanf("%s", arr[i].name);
        printf("Enter Age\n");
        scanf("%d", &arr[i].age);
        printf("Enter No of test\n");
        scanf("%d", &arr[i].noOfTest);
        printf("Enter Average\n");
        scanf("%f", &arr[i].average);
    }

    // for (int i = 0; i < 2; i++){
    //     printf("Name of Cricketer : %s\n", arr[i].name);
    //     printf("Age of Cricketer : %d\n", arr[i].age);
    //     printf("No of test macth of Cricketer : %d\n", arr[i].noOfTest);
    // }
    for (int i = 0; i < 3; i++){
        printf("Name : %s\n", arr[i].name);
        printf("Age : %d\n", arr[i].age);
        printf("No of Test Match : %d\n", arr[i].noOfTest);
        printf("Average : %f\n", arr[i].average);
    }

    return 0;
}