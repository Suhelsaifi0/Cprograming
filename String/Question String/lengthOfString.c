#include <stdio.h>
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads input including spaces
    str[strcspn(str, "\n")] = 0;    // Removes the newline character if present

    // Calculate length using a for loop
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}
