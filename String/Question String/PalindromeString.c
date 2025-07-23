#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

int main() {
    char str[200];
    int start, end;
    
    // Read the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if it's present
    str[strcspn(str, "\n")] = '\0';

    start = 0;
    end = strlen(str) - 1; // Set end to the last index of the string
    
    int isPalindrome = 1; // Flag to check palindrome

    while (start < end) {
        // Skip non-alphanumeric characters at the start and end
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            // Compare characters case-insensitively
            if (tolower(str[start]) != tolower(str[end])) {
                isPalindrome = 0; // Not a palindrome
                break;
            }
            start++;
            end--;
        }
    }

    if (isPalindrome) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
