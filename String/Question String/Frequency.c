#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower() (optional, for case-insensitive counting)

int main() {
    char str[200];
    int freq[256] = {0}; // Array to store frequency of each character (ASCII range)

    // Read the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if it's present
    str[strcspn(str, "\n")] = '\0';

    // Traverse the string and count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert to lowercase if case-insensitive count is required
        // str[i] = tolower(str[i]); // Uncomment this line for case-insensitive counting

        freq[(unsigned char)str[i]]++; // Increment the frequency of the current character
    }

    // Display the frequency of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
