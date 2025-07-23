#include<stdio.h>
int main() {

    int n;
    printf("ENTER THE NUMBER OF ARRAY ELEMENTS: \n");
    scanf("%d", &n); // Take the size of the array

    int arr[n]; // Declare an array of size `n`
    printf("ENTER ARRAY ELEMENTS: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input the elements of the array
    }

    // Reverse the array
    int i = 0, j = n - 1;
    while (i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // Print the reversed array
    printf("REVERSED ARRAY: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
