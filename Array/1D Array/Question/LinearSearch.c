#include<stdio.h>
int main() {

    int n;
    printf("ENTER NUMBER OF ARRAY ELEMENTS: ");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER ARRAY: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key, found = 0;
    printf("ENTER KEY TO FIND: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("KEY IS FOUND AT INDEX %d\n", i);
            found = 1; // Mark that the key is found
            break;     // Exit the loop once the key is found
        }
    }

    if (!found) {
        printf("KEY IS NOT FOUND\n");
    }

    return 0;
}
