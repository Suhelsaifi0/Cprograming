#include <stdio.h>
#include <string.h> // Only needed for strlen (can be replaced)

int main() {
    char str[] = "Hello World!";
    int length = 0;
    char temp;

    // Find the length of the string (manually, avoiding strlen)
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string in place
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
