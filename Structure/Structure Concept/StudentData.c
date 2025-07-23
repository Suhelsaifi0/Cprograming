#include <stdio.h>

// Define the structure Student
struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student student1, student2;

    // Input data for the first student
    printf("Enter name of the first student: ");
    fgets(student1.name, sizeof(student1.name), stdin); // To read strings with spaces
    printf("Enter age of the first student: ");
    scanf("%d", &student1.age);
    printf("Enter total marks of the first student: ");
    scanf("%f", &student1.totalMarks);
    getchar(); // To consume the newline character left by previous scanf

    // Input data for the second student
    printf("\nEnter name of the second student: ");
    fgets(student2.name, sizeof(student2.name), stdin);
    printf("Enter age of the second student: ");
    scanf("%d", &student2.age);
    printf("Enter total marks of the second student: ");
    scanf("%f", &student2.totalMarks);

    // Display the information of both students
    printf("\nStudent 1 Information:\n");
    printf("Name: %s", student1.name);  // fgets keeps the newline, so we print it as is
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);

    printf("\nStudent 2 Information:\n");
    printf("Name: %s", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);

    // Calculate the average of total marks
    float averageMarks = (student1.totalMarks + student2.totalMarks) / 2;
    printf("\nAverage Total Marks of both students: %.2f\n", averageMarks);

    return 0;
}
